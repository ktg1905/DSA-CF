#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
 
        vector<ll> inv;
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            inv.push_back(x-i-1);
        }
 
        sort(inv.begin(), inv.end());
        inv.erase(unique(inv.begin(), inv.end()), inv.end());
 
        ll ans1 = 1;
        ll cur = 1;
 
        for (ll i = 1; i < (ll)inv.size(); i++) {
            if (inv[i] == inv[i - 1] + 1) {
                cur++;
            } 
            else {
                cur = 1;
            }
 
            ans1 = max(ans1, cur);
        }
 
        cout << ans1 << '
';
 
    }
 
    
 
    return 0;
}