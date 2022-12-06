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
