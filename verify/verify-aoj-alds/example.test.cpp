#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B"
#include "../../template/template.hpp"

void NYAN::solve() {
  INT(n);
  vi s(n);
  cin >> s;

  INT(q);
  int cnt = 0;
  rep(_, q) {
    INT(x);
    cnt += binary_search(all(s), x);
  }
  print(cnt);
}
