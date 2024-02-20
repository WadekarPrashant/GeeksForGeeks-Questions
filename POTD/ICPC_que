#include<bits/stdc++.h>
using namespace std;


#define int long long
#define VI vector<int>
#define VVI vector<vector<int>>
#define II pair<int,int>
#define PB push_back
#define MP make_pair
#define EB emplace_back
#define F first
#define S second
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define ALL(x) begin(x),end(x)
#define SZ(x) ((int)((x).size()))
#define SET(a,v)  memset((a),(v),sizeof(a))
using LL=long long;
using dbl=double;
#define endl "\n"
const long long mod = 1e9+7;

void solve(){
    int n,x;
    cin>>n>>x;
    // sum of first
    int y = (n/2)+1; 
    int sum = y*(1+y)/2;
    int start = x;
    int end = x-(n-y);
    int sum1 = start*(1+start)/2;
    sum1-= end*(end+1)/2;
    int final = sum+sum1;
    
    // int ans = n*(final-y);
    // int ans = n*(f/n - y);
    int ans = final-n*y;

   
    cout<<ans<<endl;

}

signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return(0);
}