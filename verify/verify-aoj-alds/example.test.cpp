#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B"
#include "../../template/template.hpp"

void Nyan::solve() {
  ini(n);
  vl a(n); in(a);
  ini(q);
  int cnt = 0;
  rep(_, q) {
    ini(x);
    cnt += binary_search(all(a), x);
  }
  out(cnt);
}
