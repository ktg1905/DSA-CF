#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while (t--) {
        int n,k;
        cin >>n>>k;
 
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
 
        vector<int> small_p_fac(n + 1);
 
        for (int i=1; i<=n; i++){
            small_p_fac[i] = i;
        }
 
        for (int i=2; i*i<=n; i++) {
            if (small_p_fac[i] == i) {
                for (int j =i*i; j<=n; j+=i) {
                    if (small_p_fac[j] == j){
 
                        small_p_fac[j] = i;
                    }
                }
            }
        }
 
        vector<ll> dp(n+1, 0);
 
        for (int x=k+1; x<=n; x++) {
 
            dp[x] = LLONG_MAX;
            int y = x;
 
            while (y>1) {
                int q = small_p_fac[y];
 
                dp[x] = min(dp[x], 1LL+1LL*q*dp[x/q]);
 
                while (y%q == 0)
                    y/=q;
            }
        }
 
        ll ans1 = 0;
 
        for (int x : a){
            ans1 += dp[x];
        }
        cout<<ans1<<'
';
    }
 
    return 0;
}