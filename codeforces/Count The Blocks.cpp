//      author: iluzn
//      created: 2021-05-21 16:14:00
//      problem: E. Count The Blocks
//      URL: https://codeforces.com/problemset/problem/1327/E
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <iomanip>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <climits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
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
int M= 998244353;
int pw(int a,int p=M-2,int md=M){
	int res=1;
	while(p>0){
		if(p&1)res=a*res%md;
	 a=a*a%md;
	 p>>=1;
	}
	return res;
}
void iluzn(){
  gi(n);
  fss(i,1,n){
  	int pos=n-i-1;
  	int ans=10*pos;
  	ans*=pw(10,n-i-2);
  	ans%=M;
  	ans*=81;
  	ans%=M;
  	ans+=2*10*9*pw(10,n-i-1);
  	ans%=M;
  	cout<<ans<<" ";
  	
  }
  cout<<10;
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
    //cin>>t;
     while(t--) iluzn();
    return 0;
}
