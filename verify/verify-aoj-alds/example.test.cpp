#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B"
#include "../../template/template.hpp"

int main() {
  INT(n);
  vi s(n); cin >> s;
  INT(q);
  int cnt = 0;
  rep(_, q) {
    int t_i; cin >> t_i;
    cnt += binary_search(all(s), t_i);
  }
  cout << cnt << endl;
  return 0;
}
