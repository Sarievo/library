#pragma once
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
// find_by_order() - returns an iterator to the kth-largest element (counting from zero)
// order_of_key()  - the number of items in a set that are strictly smaller than our item
template<class T> using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class T> using indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
/**
* @brief Tree Policy
*/