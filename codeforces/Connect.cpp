//      author: iluzn
//      created: 2021-05-18 18:40:07
//      problem: C. Connect
//      URL: https://codeforces.com/problemset/problem/1130/C

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
const int N = 3e5, M = N;
const int inf =LLONG_MAX;
const int infn =LLONG_MIN;

// vi G[N];
bool visited[51][51];
//int level[N];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int n;
vs s;
vpii a;
vpii b;
bool isvalid(int x,int y){
	if(x<=n&&x>=1&&y<=n&&y>=1&&!visited[x][y]&&s[x-1][y-1]=='0')
	return 1;
	return 0 ;
}
int dis(int x1,int y1,int x2,int y2){
	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}
void dfs1(int x,int y){
	a.pb({x,y});
	visited[x][y]=1;
	fs(i,4){
		if(isvalid(x+dx[i],y+dy[i])){
			dfs1(x+dx[i],y+dy[i]);
		}
	}
}
void dfs2(int x,int y){
	b.pb({x,y});
	visited[x][y]=1;
	fs(i,4){
		if(isvalid(x+dx[i],y+dy[i])){
			dfs2(x+dx[i],y+dy[i]);
		}
	}
}

void iluzn(){
	cin>>n;
  gi(x1,y1,x2,y2);
  fs(i,n){
  	gs(a);
  	s.pb(a);
  }
  int mn=inf;
  dfs1(x1,y1);
  clr(visited);
  dfs2(x2,y2);
  fs(i,a.size()){
  	fs(j,b.size()){
  		mn=min(mn,dis(a[i].F,a[i].S,b[j].F,b[j].S));
  	}
  }
  cout<<mn;
 }
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    //cin>>t;
     while(t--) iluzn();
    return 0;
}
