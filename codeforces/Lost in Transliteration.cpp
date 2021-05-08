//      author: iluzn
//      created: 2021-05-08 15:05:28
//      problem: F. Lost in Transliteration
//      URL: https://codeforces.com/contest/883/problem/F

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
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
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
#define PI 3.1415926535897932384626
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(a,min(b,min(c,d)))
#define max4(a,b,c,d)       max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))
#define int long long
#define ll long long
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
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
string convert(string s){
	int n=s.length(),i;
	while(true){
		bool done=0;
		
		tr(it,s){
			auto p=it;
			p++;
			if(p==s.end())
			 break;
			else
			
		if(*it=='k'&&*p=='h'){
			s.erase(it);
			it--;
			done=1;
		}
	}
	    if(!done)
	      break;
  }
  string k="";
  for(int i=0;i<s.length();i++){
  	if(s[i]=='u'){
  		k+="oo";
  	}
  	else
  	  k+=s[i];
  }
  error(k);
  return k;
}
void iluzn(){
  int n;
  cin>>n;
  int k=n;
  set<string> st;
  while(n--){
  	string s;
  	cin>>s;
  	// deb(s);
  	s=convert(s);
  	// deb(s);
  	st.insert(s);
  }
  cout<<st.size()<<nl;
  // tr(it,st)
    // cout<<*it<<nl;
 }
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    //cin>>t;
     while(t--) iluzn();
    return 0;
}
