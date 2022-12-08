#define fi first
#define se second
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
#define all(i) begin(i),end(i)
#define rall(n) (n).rbegin(),(n).rend()
#define ini(...) int __VA_ARGS__;in(__VA_ARGS__)
#define inl(...) long long __VA_ARGS__;in(__VA_ARGS__)
#define ins(...) string __VA_ARGS__;in(__VA_ARGS__)
#define in2(s, t) for (int i = 0; i < (int)s.size(); i++) { in(s[i], t[i]); }
#define in3(s, t, u) for (int i = 0; i < (int)s.size(); i++) { in(s[i], t[i], u[i]); }
#define in4(s, t, u, v) for (int i = 0; i < (int)s.size(); i++) { in(s[i], t[i], u[i], v[i]); }
#define fin(...) { out(__VA_ARGS__);return; }
