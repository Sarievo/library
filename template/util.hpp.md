---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: magic/astar.hpp
    title: A* Pathfinding
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: "Template(\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8)"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/verify-aoj-alds/example.test.cpp
    title: verify/verify-aoj-alds/example.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 1 "template/util.hpp"

    namespace Nyan{

    using ll=long long;

    using ull=unsigned long long;

    using ld=long double;

    using vl=vector<ll>;

    using vi=vector<int>;

    using vs=vector<string>;

    using vc=vector<char>;

    using vvl=vector<vl>;

    using vvi=vector<vi>;

    using pl=pair<ll,ll>;

    using pi=pair<int,int>;

    using vvc=vector<vc>;

    using vd=vector<double>;

    using vp=vector<pl>;

    using vb=vector<bool>;

    template<class T>

    auto max(const T&a){return *max_element(all(a));}

    template<class T>

    auto min(const T&a){return *min_element(all(a));}

    template<typename T,typename U>

    inline bool chmax(T&a,U b){return a<b&&(a=b,true);}

    template<typename T,typename U>

    inline bool chmin(T&a,U b){return a>b&&(a=b,true);}

    template<class T> using maxheap=priority_queue<T,vector<T>,less<T>>;

    template<class T> using minheap=priority_queue<T,vector<T>,greater<T>>;

    constexpr ll MOD=1000000007;

    constexpr ll mod=998244353;

    constexpr int dx[]{+0,+1,+0,-1,+1,+1,-1,-1};

    constexpr int dy[]{+1,+0,-1,+0,+1,-1,-1,+1};

    void yes(bool x){cout<<(x?"yes":"no")<<endl;}

    void Yes(bool x){cout<<(x?"Yes":"No")<<endl;}

    void YES(bool x){cout<<(x?"YES":"NO")<<endl;}


    }  // namespace Nyan

    '
  code: 'namespace Nyan{

    using ll=long long;

    using ull=unsigned long long;

    using ld=long double;

    using vl=vector<ll>;

    using vi=vector<int>;

    using vs=vector<string>;

    using vc=vector<char>;

    using vvl=vector<vl>;

    using vvi=vector<vi>;

    using pl=pair<ll,ll>;

    using pi=pair<int,int>;

    using vvc=vector<vc>;

    using vd=vector<double>;

    using vp=vector<pl>;

    using vb=vector<bool>;

    template<class T>

    auto max(const T&a){return *max_element(all(a));}

    template<class T>

    auto min(const T&a){return *min_element(all(a));}

    template<typename T,typename U>

    inline bool chmax(T&a,U b){return a<b&&(a=b,true);}

    template<typename T,typename U>

    inline bool chmin(T&a,U b){return a>b&&(a=b,true);}

    template<class T> using maxheap=priority_queue<T,vector<T>,less<T>>;

    template<class T> using minheap=priority_queue<T,vector<T>,greater<T>>;

    constexpr ll MOD=1000000007;

    constexpr ll mod=998244353;

    constexpr int dx[]{+0,+1,+0,-1,+1,+1,-1,-1};

    constexpr int dy[]{+1,+0,-1,+0,+1,-1,-1,+1};

    void yes(bool x){cout<<(x?"yes":"no")<<endl;}

    void Yes(bool x){cout<<(x?"Yes":"No")<<endl;}

    void YES(bool x){cout<<(x?"YES":"NO")<<endl;}


    }  // namespace Nyan

    '
  dependsOn: []
  isVerificationFile: false
  path: template/util.hpp
  requiredBy:
  - magic/astar.hpp
  - template/template.hpp
  timestamp: '2022-12-06 17:12:26+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/verify-aoj-alds/example.test.cpp
documentation_of: template/util.hpp
layout: document
redirect_from:
- /library/template/util.hpp
- /library/template/util.hpp.html
title: template/util.hpp
---
