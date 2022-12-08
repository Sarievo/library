#define I(...) int __VA_ARGS__;in(__VA_ARGS__)
#define L(...) long long __VA_ARGS__;in(__VA_ARGS__)
#define S(...) string __VA_ARGS__;in(__VA_ARGS__)
#define C(...) char __VA_ARGS__;in(__VA_ARGS__)
#define D(...) double __VA_ARGS__;in(__VA_ARGS__)
#define V(T, name, n) vector<T> name(n); in(name)
#define VV(T, name, n, m) vector<vector<T>> name(n, vector<type>(m)); in(name)
#define fin(...) {out(__VA_ARGS__);return;}
#define overload4(a, b, c, d, e, ...) e
#define overload3(a, b, c, d, ...) d
#define rep1(a) for(ll i=0;i<(ll)(a);i++)
#define rep2(i, a) for(ll i=0;i<(ll)(a);i++)
#define rep3(i, a, b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rep4(i, a, b, c) for(ll i=(ll)(a);i<(ll)(b);i+=(ll)(c))
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(a) for(ll i=(ll)(a)-1;i>=0;i--)
#define rrep2(i, a) for(ll i=(ll)(a)-1;i>=0;i--)
#define rrep3(i, a, b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)
#define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define fore(...) for(auto&&__VA_ARGS__)
#define all1(i) begin(i),end(i)
#define all2(i, a) begin(i),begin(i)+a
#define all3(i, a, b) begin(i)+a,begin(i)+b
#define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)
#define rall(n) (n).rbegin(),(n).rend()
#define pb push_back
#define eb emplace_back
#define a first
#define b second
