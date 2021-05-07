//      author: iluzn
//      created: 2021-05-06 23:56:01
//      problem: B. Planet Lapituletti
//      URL: https://codeforces.com/problemset/problem/1493/B

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
bool can(int h,int m,int a,int b){
	string s=to_string(h);
	string w=to_string(m);
	if(s.length()==1)
	  s="0"+s;
	if(w.length()==1)
	  w="0"+w;
	string ch="12580";
	int i;
	fo(i,s.length()){
		bool done=0;
		int j;
		fo(j,ch.length()){
			if(s[i]==ch[j]){
				done=1;
				break;
			}
		}
		if(!done)
		  return 0;
	}
	fo(i,w.length()){
		bool done=0;
		int j;
		fo(j,ch.length()){
			if(w[i]==ch[j]){
				done=1;
				break;
			}
		}
		if(!done)
		  return 0;
	}
	map<char,char> mp;
	mp['1']='1';
	mp['2']='5';
	mp['5']='2';
	mp['8']='8';
	mp['0']='0';
	string x="";
	x+=mp[w[1]];
	x+=mp[w[0]];
	string y="";
	y+=mp[s[1]];
	y+=mp[s[0]];
	int nh=stoll(x),nm=stoll(y);
	if(nh>=a||nm>=b)
	  return 0;
	return 1;
}
void iluzn(){
  int a,b;
  cin>>a>>b;
  string str;
  cin>>str;
  string s="",w="";
  s+=str[0];
  s+=str[1];
  w+=str[3];
  w+=str[4];
  int h=stoll(s),m=stoll(w);
  int i,j;
  while(true){
  	if(can(h,m,a,b)){
  		s=to_string(h),w=to_string(m);
  		if(s.length()==1)
  		  s="0"+s;
  		if(w.length()==1)
  		  w="0"+w;
  		cout<<s<<":"<<w<<nl;
  		return;
  	}
  	m++;
  	if(m==b){
  		h++;
  		m=0;
  		if(h==a)
  		 h=0;
  	}
  }
  
 }
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
     while(t--) iluzn();
    return 0;
}
