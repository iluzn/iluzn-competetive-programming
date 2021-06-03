//      author: iluzn
//      created: 2021-05-10 22:09:05
//      problem: C. Perform the Combo
//      URL: https://codeforces.com/problemset/problem/1311/C

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
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(a,min(b,min(c,d)))
#define max4(a,b,c,d)       max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))
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
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
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
const int N = 3e5, M = N;
const int inf =LLONG_MAX;
const int infn =LLONG_MIN;

// vi G[N];
// bool visited[N];
//int level[N];

void iluzn(){
  gi(n,m);
  int dp[n][26];
  clr(dp);
  gs(s);
  fs(i,n){
  	int ind=(int)s[i]-97;
  	dp[i][ind]++;
  	if(i)
  	fs(j,26)
  	  dp[i][j]+=dp[i-1][j];
  	
  }
  // fs(i,n){
  	// fs(j,26)
  	  // cout<<dp[i][j]<<" ";
  	// cout<<nl;
  // }
  int ans[26];
  clr(ans);
  while(m--){
  	gi(x);
  	--x;
  	fs(i,26)
  	 {
  	 	 ans[i]+=dp[x][i];
  	 	 // error(dp[x-1][i]);
  	 }
  	 
  }
  fs(i,26)
    cout<<ans[i]+dp[n-1][i]<<" ";
  cout<<nl;
 }
signed main() {
    int t=1;
    cin>>t;
     while(t--) iluzn();
    return 0;
}
