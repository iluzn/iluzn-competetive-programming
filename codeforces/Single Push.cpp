//      author: iluzn
//      created: 2021-05-02 14:55:13
//      problem: A. Single Push
//      URL: https://codeforces.com/problemset/problem/1253/A

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

void iluzn(){
  int n;
  cin>>n;
  int a[n][2];
  int i;
  fo(i,n)  cin>>a[i][0];
  bool yes=1;
  int cnt=0,dif=0;
  fo(i,n){
  	cin>>a[i][1];
  }
  fo(i,n){
  	if(a[i][0]!=a[i][1]){
  		if(!cnt){
  			dif=a[i][0]-a[i][1];
  			if(dif>0){
  				pn;
  				return;
  			}
  			cnt=1;
  		}
  		else{
  			if(cnt==1){
  				if(a[i][0]-a[i][1]!=dif){
  					pn;
  					return;
  				}
  				
  			}
  			else{
  			  pn;
  			  return;
  		  }
  		}
  	}
  	else
  	  if(cnt)
  	    cnt=2;
  	 
  }
  py;
 }
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
     while(t--) iluzn();
    return 0;
}
