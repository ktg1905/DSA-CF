#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll> v(n, 0);
        for (ll i=1; i<=n; i++) {
            ll x;
            cin>>x;
            v[i-1] = (i%2 == 0) ? x:-x; 
        }
        sort(v.begin(), v.end(), greater<ll>());
        ll p = n/2;
        ll ans = 0;
        for (ll i=0; i<n; i++) {
            if (i<p){
                ans += v[i];
            } 
            else{
                ans -= v[i];
            } 
        }
        cout<<ans<<'
';
    }
    return 0;
}