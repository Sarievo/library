---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: modint
    links: []
  bundledCode: "#line 2 \"math/modint.hpp\"\ntemplate<int m>\nstruct modint{\n private:\n\
    \  unsigned int x;\n  static constexpr unsigned int umod(){return m;}\n public:\n\
    \  static modint raw(int v){modint ret;ret.x=v;return ret;}\n  constexpr modint():x(0){}\n\
    \  constexpr modint(int y){int v=y%m;if(v<0)v+=m;x=(unsigned int)v;}\n  constexpr\
    \ modint(long long y){long long v=y%(long long)m;if(v<0)v+=m;x=(unsigned int)v;}\n\
    \  constexpr modint(unsigned int y){x=(unsigned int)(y%umod());}\n  modint& operator++(){x++;if(x==umod())x=0;return\
    \ *this;}\n  modint& operator--(){if(x==0)x=umod();x--;return *this;}\n  modint\
    \ operator++(int){modint ret=*this;++*this;return ret;}\n  modint operator--(int){modint\
    \ ret=*this;--*this;return ret;}\n  modint& operator+=(const modint&p){if((x+=p.x)>=umod())x-=umod();return\
    \ *this;}\n  modint& operator-=(const modint&p){if((x-=p.x)>=umod())x+=umod();return\
    \ *this;}\n  modint& operator*=(const modint&p){unsigned long long y=x;y*=p.x;x=(unsigned\
    \ int)(y%umod());return *this;}\n  modint& operator/=(const modint&p){return *this*=p.inv();}\n\
    \  modint operator+()const{return *this;}\n  modint operator-()const{return modint()-*this;}\n\
    \  modint pow(long long n)const{modint ret(1),mul=*this;while(n){if(n&1)ret*=mul;mul*=mul;n>>=1;}return\
    \ ret;}\n  modint inv()const{long long a=x,b=m,u=1,v=0;while(b){long long t=a/b;swap(a-=t*b,b);swap(u-=t*v,v);}return\
    \ modint(u);}\n  friend modint operator+(const modint&l,const modint&r){return\
    \ modint(l)+=r;}\n  friend modint operator-(const modint&l,const modint&r){return\
    \ modint(l)-=r;}\n  friend modint operator*(const modint&l,const modint&r){return\
    \ modint(l)*=r;}\n  friend modint operator/(const modint&l,const modint&r){return\
    \ modint(l)/=r;}\n  friend bool operator==(const modint&l,const modint&r){return\
    \ l.x==r.x;}\n  friend bool operator!=(const modint&l,const modint&r){return l.x!=r.x;}\n\
    \  friend ostream&operator<<(ostream&os,const modint&p){return os<<p.val();}\n\
    \  friend istream&operator>>(istream&is,modint&a){long long t;is>>t;a=modint(t);return\
    \ (is);}\n  static constexpr int get_mod(){return m;}\n  [[nodiscard]] int val()\
    \ const{return (int)x;}\n};\n/**\n * @brief modint\n*/\n"
  code: "#pragma once\ntemplate<int m>\nstruct modint{\n private:\n  unsigned int\
    \ x;\n  static constexpr unsigned int umod(){return m;}\n public:\n  static modint\
    \ raw(int v){modint ret;ret.x=v;return ret;}\n  constexpr modint():x(0){}\n  constexpr\
    \ modint(int y){int v=y%m;if(v<0)v+=m;x=(unsigned int)v;}\n  constexpr modint(long\
    \ long y){long long v=y%(long long)m;if(v<0)v+=m;x=(unsigned int)v;}\n  constexpr\
    \ modint(unsigned int y){x=(unsigned int)(y%umod());}\n  modint& operator++(){x++;if(x==umod())x=0;return\
    \ *this;}\n  modint& operator--(){if(x==0)x=umod();x--;return *this;}\n  modint\
    \ operator++(int){modint ret=*this;++*this;return ret;}\n  modint operator--(int){modint\
    \ ret=*this;--*this;return ret;}\n  modint& operator+=(const modint&p){if((x+=p.x)>=umod())x-=umod();return\
    \ *this;}\n  modint& operator-=(const modint&p){if((x-=p.x)>=umod())x+=umod();return\
    \ *this;}\n  modint& operator*=(const modint&p){unsigned long long y=x;y*=p.x;x=(unsigned\
    \ int)(y%umod());return *this;}\n  modint& operator/=(const modint&p){return *this*=p.inv();}\n\
    \  modint operator+()const{return *this;}\n  modint operator-()const{return modint()-*this;}\n\
    \  modint pow(long long n)const{modint ret(1),mul=*this;while(n){if(n&1)ret*=mul;mul*=mul;n>>=1;}return\
    \ ret;}\n  modint inv()const{long long a=x,b=m,u=1,v=0;while(b){long long t=a/b;swap(a-=t*b,b);swap(u-=t*v,v);}return\
    \ modint(u);}\n  friend modint operator+(const modint&l,const modint&r){return\
    \ modint(l)+=r;}\n  friend modint operator-(const modint&l,const modint&r){return\
    \ modint(l)-=r;}\n  friend modint operator*(const modint&l,const modint&r){return\
    \ modint(l)*=r;}\n  friend modint operator/(const modint&l,const modint&r){return\
    \ modint(l)/=r;}\n  friend bool operator==(const modint&l,const modint&r){return\
    \ l.x==r.x;}\n  friend bool operator!=(const modint&l,const modint&r){return l.x!=r.x;}\n\
    \  friend ostream&operator<<(ostream&os,const modint&p){return os<<p.val();}\n\
    \  friend istream&operator>>(istream&is,modint&a){long long t;is>>t;a=modint(t);return\
    \ (is);}\n  static constexpr int get_mod(){return m;}\n  [[nodiscard]] int val()\
    \ const{return (int)x;}\n};\n/**\n * @brief modint\n*/"
  dependsOn: []
  isVerificationFile: false
  path: math/modint.hpp
  requiredBy: []
  timestamp: '2022-12-06 17:12:26+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/modint.hpp
layout: document
---

