//           author: iluzn
//           created: 2021-04-28 15:45:22

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
  int n,q,k;
  cin>>n>>q>>k;
  vi a(n+2);
  int i;
  for(i=1;i<=n;i++){
  	cin>>a[i];
  }
  a[0]=1;
  a[n+1]=k;
  int left[n+1],right[n+1];
  int cur=0;
  for(i=1;i<=n;i++){
  	cur+=(a[i]-a[i-1]-1);
  	left[i]=cur+1;
  }
  cur=0;
  for(i=n;i>0;i--){
  	cur+=a[i+1]-a[i]-1;
  	right[i]=cur+1;
  }
  
    while(q--){
    	int l,r;
    	cin>>l>>r;
    	if(l==r){
    		cout<<k-1<<nl;
    		continue;
    	}
    	int ans=0;
    	ans+=left[r]-left[l];
    	ans+=abs(a[l]-1);
    	ans+=right[l]-right[r];
    	ans+=abs(k-a[r]);
    	cout<<ans<<nl;
    }
 }
signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    //cin>>t;
     while(t--) iluzn();
    return 0;
}
