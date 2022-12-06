namespace Nyan{
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
template<class T,class...U>
void print(const T&t,const U&...u){cout<<t<<' ';print(u...);}
template<class...T>
void fin(const T&...a){print(a...);exit(0);}
struct Nyan{
  Nyan(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cout<<fixed<<setprecision(12);
    cerr<<fixed<<setprecision(12);
  }
}nyan;

}  // namespace Nyan
