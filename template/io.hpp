namespace Nyan {
template<typename T, typename U>
ostream &operator<<(ostream &os, pair<T, U> &p) {
  os << p.first << " " << p.second;
  return os;
}
template<typename T, typename U>
istream &operator>>(istream &is, pair<T, U> &p) {
  is >> p.first >> p.second;
  return is;
}
template<typename T>
ostream &operator<<(ostream &os, vector<T> &v) {
  for (auto it = v.begin(); it != v.end();) {
    os << *it << ((++it) != v.end() ? " " : "");
  }
  return os;
}
template<typename T>
istream &operator>>(istream &is, vector<T> &v) {
  for (T &e : v) is >> e;
  return is;
}
void in() {}
template<class T, class... U>
void in(T &t, U &...u) {
  cin >> t;
  in(u...);
}
void out() { cout << "\n"; }
template<typename T, class... U, char sep = ' '>
void out(const T &t, const U &...u) {
  cout << t;
  if (sizeof...(u)) cout << sep;
  out(u...);
}
struct Nyan {
  Nyan() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cout << fixed << setprecision(12);
    cerr << fixed << setprecision(12);
  }
} nyan;

}  // namespace Nyan
