#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define OO 2'000'000'000
#define ull unsigned long long
#define nl '\n'
#define sz(x) (ll)(x.size())
#define all(x) x.begin(),x.end()
#define rall(s)  s.rbegin(), s.rend()
#define getline(s) getline(cin>>ws,s)
#define ceill(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define pi  3.141592653589793
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define multi_ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
 
 
void Fast_IO(){
ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// freopen("filename.in", "r", stdin);
// freopen("filename.txt", "w", stdout);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
#endif
}
 
 
 
 
int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
 
ll MaxSubarray(vector<ll> &a, vector<ll>&b,ll l,ll r){
    // kadane's algorithm
    ll maxi = 0, sum = 0,n=sz(a);
    for(int i=0;i<n;i++){
        if(i>=l and i<=r) sum+=b[i];
        else sum+=a[i];
        maxi = max(maxi,sum);
        if(sum<0) sum=0;
    }
    return maxi;
}
 
 
 
void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i]/x;
    }
    
    vector<vector<ll>> dp(n+1, vector<ll>(2));
    
    ll ans = 0;
    
    for (int i = 0; i < n; i++){
        dp[i+1][0] = max(dp[i][0]+a[i], 0LL);
 
        dp[i+1][1] = max(max(dp[i][1]+a[i], dp[i][0]+b[i]), b[i]);
        
        ans = max(ans, dp[i+1][1]);
    }
    cout<<ans<<nl;
 
 
 
}
 
int main(){
    Fast_IO();
int t =1; 
//cin>>t;
while(t--){
solve();
}
return 0;
}  
 
//DONATE SRAVstudios

//BTC - bc1q5kmqqynratseyh7v0n8q58rn7p5xejuemmc4px

//USDT(ETH)  - 0x8558288490E11E7F900471E7D52F0b0A0B6b8572

//USDT(SOLANA)  - 4MjmiAwiQT1cqb5fSpvdsKCabZAKxopcMsTqem9gWBqB

//USDT(POLYGON)  - 0x8558288490E11E7F900471E7D52F0b0A0B6b8572
//
//ETH  - 0x8558288490E11E7F900471E7D52F0b0A0B6b8572
