#pragma once
// #pragma GCC target("avx2")
// #pragma GCC optimize("O3","unroll-loops")
#include <bits/stdc++.h>
#define overload4(a,b,c,d,e,...) e
#define overload3(a,b,c,d,...) d
#define rep1(a) for(ll i=0;i<(ll)(a);i++)
#define rep2(i,a) for(ll i=0;i<(ll)(a);i++)
#define rep3(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rep4(i,a,b,c) for(ll i=(ll)(a);i<(ll)(b);i+=(ll)(c))
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(a) for(ll i=(ll)(a)-1;i>=0;i--)
#define rrep2(i,a) for(ll i=(ll)(a)-1;i>=0;i--)
#define rrep3(i,a,b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)
#define rrep(...) overload3(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define fore(...) for(auto&&__VA_ARGS__)
#define all1(i) begin(i),end(i)
#define all2(i,a) begin(i),begin(i)+a
#define all3(i,a,b) begin(i)+a,begin(i)+b
#define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)
#define rall(n) (n).rbegin(),(n).rend()
#define INT(...) int __VA_ARGS__;scan(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__;scan(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;scan(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__;scan(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;scan(__VA_ARGS__)
#define LD(...) ld __VA_ARGS__;scan(__VA_ARGS__)
#define pb push_back
#define eb emplace_back
#define END(...) {print(__VA_ARGS__);return;}
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
// using mint=modint1000000007;
// using mint=modint998244353;
#endif
using namespace std;
using ll =long long;
using ull=unsigned long long;
using ld =long double;
using vl =vector<ll>;
using vi =vector<int>;
using vs =vector<string>;
using vc =vector<char>;
using vvl=vector<vl>;
using pi =pair<int,int>;
using pl =pair<ll,ll>;
using vvc=vector<vc>;
using vd =vector<double>;
using vp =vector<pl>;
using vb =vector<bool>;
constexpr int dx[]{+0,+1,+0,-1,+1,+1,-1,-1};
constexpr int dy[]{+1,+0,-1,+0,+1,-1,-1,+1};
template<typename T,typename U>
ostream&operator<<(ostream&os,pair<T,U>&p){os<<p.first<<" "<<p.second;return os;}
template<typename T,typename U>
istream&operator>>(istream&is,pair<T,U>&p){is>>p.first>>p.second;return is;}
template<typename T>
ostream&operator<<(ostream&os,vector<T>&v){for(auto it=v.begin();it!=v.end();){os<<*it<<((++it)!=v.end()?" ":"");}return os;}
template<typename T>
istream&operator>>(istream&is,vector<T>&v){for(T&e:v)is>>e;return is;}
void scan(){}
template<class T,class...U>
void scan(T&t,U&...u){cin>>t;scan(u...);}
template<class T>
void print(const T&t){cout<<t<<'\n';}
template<class T, class...U>
void print(const T&t,const U&...u){cout<<t<<' ';print(u...);}
template<class...T>
void fin(const T&...a){print(a...);exit(0);}
template<typename T,typename U>
inline bool chmax(T&a,U b){return a<b&&(a=b,true);}
template<typename T,typename U>
inline bool chmin(T&a,U b){return a>b&&(a=b,true);}
template<class T> using maxheap=priority_queue<T,vector<T>,less<T>>;
template<class T> using minheap=priority_queue<T,vector<T>,greater<T>>;
struct Nyan{Nyan(){cin.tie(nullptr);ios::sync_with_stdio(false);cout.tie(0);cout<<fixed<<setprecision(12);cerr<<fixed<<setprecision(12);}};
/**
 * @brief Template(テンプレート)
*/