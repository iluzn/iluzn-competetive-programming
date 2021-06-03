//      author: iluzn
//      created: 2021-05-25 14:42:58
//      problem: D. Alice, Bob and Candies
//      URL: https://codeforces.com/problemset/problem/1352/D

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define nl "\n"
#define F first
#define S second
#define py cout<<"YES"<<nl
#define pn cout<<"NO"<<nl
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define int long long
#define ll long long
#define fsss(name, start, stop, step) for (ll name = start; name < (ll)stop; name += step)
#define fss(name, start, stop) fsss(name, start, stop, 1)
#define fs(name, stop) fss(name, 0, stop)
#define rfsss(name, start, stop, step) for (ll name = stop-1; name >= (ll)start; name -= step)
#define rfss(name, start, stop) rfsss(name, start, stop, 1)
#define rfs(name, stop) rfss(name, 0, stop)
#define GET(type, ...) type __VA_ARGS__; cins(__VA_ARGS__)
#define gi(...) GET(int, __VA_ARGS__)
#define gs(...) GET(string, __VA_ARGS__)
#define gd(...) GET(double, __VA_ARGS__)
#define gc(...) GET(char, __VA_ARGS__)
#define deb(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
template<typename T> void cins(T &first) { cin >> first; }
template<typename T, typename... Ts> void cins(T &first, T &second, Ts&... rest) {
  cin >> first;
  cins(second, rest...);
}
typedef pair<int, int>  pii;
typedef vector<int>   vi;
typedef vector<string>   vs;
typedef vector<pii>   vpii;
typedef vector<vi>    vvi;
const int mod = pow(10,9)+7;
const int N = 3e5;
const int inf =LLONG_MAX;
const int infn =LLONG_MIN;

// vi G[N];
// bool visited[N];
//int level[N];

void iluzn(){
  gi(n);
  vi a(n);
  fs(i,n)  cin>>a[i];
  int muv=0;
  int s=0,e=n-1;
  int alice=0,bob=0;
  int pa=0,pb=0;
  bool done[n]={0};
  while(1){
  	if(muv&1){
  		int sum=0;
  		while(sum<=pa&&e>=s&&!done[e]){
  			sum+=a[e];
  			bob+=a[e];
  			done[e]=1;
  			e--;
  			
  		}
  		pb=sum;
  		
  	}
  	else{
  		int sum=0;
  		while(sum<=pb&&s<=e&&!done[s]){
  			sum+=a[s];
  			alice+=a[s];
  			done[s]=1;
  			s++;
  			
  		}
  		pa=sum;
  	}
  	
  	if(e<s)  break;
  	muv++;
  	
  }
  // fs(i,n)  cout<<done[i]<<" "<<nl;  
  cout<<muv+1<<" "<<alice<<" "<<bob<<nl;
 }
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifdef SIEVE
      sieve();
    #endif
    #ifdef NCR
       init();
    #endif
    int t=1;
    cin>>t;
     while(t--) iluzn();
    return 0;
}
