#pragma once
#include "../template/template.hpp"
struct Node {
  // (x, y) coordinate of the node
  int x, y;
  /*
   * f = g + h, where g is the cost of the path from the start node to the current node
   * and h is the estimated cost of the path from the current node to the goal node
   */
  int f, g, h;

  // Overloading the "<" operator for the priority queue
  bool operator<(const Node &n) const {
    return f > n.f;
  }
};

// Helper function to calculate the heuristic (h) value for a given node
// In this case, the heuristic is the Manhattan distance between the current node and the goal node
int heuristic(int x, int y, int goal_x, int goal_y) {
  return abs(goal_x - x) + abs(goal_y - y);
}

// Returns the list of coordinates for the path from the start node to the goal node,
// using the A* algorithm
vector<pair<int, int>> AStar(vector<vector<int>> &grid, int start_x, int start_y, int goal_x, int goal_y) {
  // Sanity check: make sure the start and goal coordinates are valid
  if (start_x < 0 || start_x >= grid.size() || start_y < 0 || start_y >= grid[0].size() ||
      goal_x < 0 || goal_x >= grid.size() || goal_y < 0 || goal_y >= grid[0].size() ||
      grid[start_x][start_y] == 1 || grid[goal_x][goal_y] == 1) {
    return {};
  }

  // The set of discovered nodes that may need to be (re-)expanded
  // At the beginning, only the start node is in this set
  priority_queue<Node> open_set;
  open_set.push({start_x, start_y, 0, 0, 0});

  // The set of nodes already evaluated
  unordered_map<int, unordered_map<int, bool>> closed_set;

  // The map of navigated nodes
  unordered_map<int, unordered_map<int, pair<int, int>>> came_from;

  // The cost of each node, including the start node
  unordered_map<int, unordered_map<int, int>> cost_so_far;
  cost_so_far[start_x][start_y] = 0;

  // The list of coordinates for the path from the start node to the goal node
  vector<pair<int, int>> path;

  // Loop until the open set is empty
  while (!open_set.empty()) {
    // Get the node with the lowest f value (i.e., the node that is closest to the goal)
    Node current = open_set.top();
    open_set.pop();

    // Check if we have reached the goal node
    if (current.x == goal_x && current.y == goal_y) {
      // Retrace the path from the goal node to the start node
      pair<int, int> curr = {current.x, current.y};
      while (curr.first != start_x || curr.second != start_y) {
        path.push_back(curr);
        curr = came_from[curr.first][curr.second];
      }
      path.emplace_back(start_x, start_y);
      reverse(path.begin(), path.end());
      return path;
    }

    // Mark the current node as visited
    closed_set[current.x][current.y] = true;

    // Explore the neighbors of the current node
    for (int i = 0; i < 4; ++i) {
      // Check if the coordinates are valid and not visited
      int x = current.x + Nyan::dx[i];
      int y = current.y + Nyan::dy[i];
      if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size()
          || grid[x][y] == 1 || closed_set[x][y]) {
        continue;
      }

      // Calculate the new f, g, and h values
      int g = current.g + 1;
      int h = heuristic(x, y, goal_x, goal_y);
      int f = g + h;

      // If the current neighbour has not been visited or has a higher f value, update its values
      if (!cost_so_far.count(x) || !cost_so_far[x].count(y) || cost_so_far[x][y] > g) {
        cost_so_far[x][y] = g;
        came_from[x][y] = {current.x, current.y};
        open_set.push({x, y, f, g, h});
      }
    }
  }
  // If the open set is empty, and we haven't reached the goal, then there is no path
  return {};
}
/**
 * @brief A* Pathfinding
*/