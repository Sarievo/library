#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B"
#include "../../template/template.hpp"

void Nyan::solve() {
  I(n);
  V(int, s, n);
  I(q);
  int cnt = 0;
  rep(_, q) {
    I(x);
    cnt += binary_search(all(s), x);
  }
  out(cnt);
}
