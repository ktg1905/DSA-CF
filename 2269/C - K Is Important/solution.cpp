#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
 
        ll n, k;
        cin>>n>>k;
        vector<ll> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
 
            a.push_back(x);
        }
        
 
        ll m = n-k+1;
        ll ans = 0;
 
        if (m <= k-1) {
            for (ll i = 0; i<m; i++) {
                ans += max(a[i], a[n-1-i]);
            }
 
        } 
        else {
            for (ll i=0; i<k-1; i++) {
                ans += max(a[i], a[n-1-i]);
            }
            for (ll i=k-1; i<n-k+1; i++) {
                ans += a[i];
            }
        }
 
        cout<<ans<<'
';
    }
 
    return 0;
}