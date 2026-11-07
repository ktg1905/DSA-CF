#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a;
        
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
 
 
        vector<ll> diff;
        for(ll i=0; i<n-1; i++){
            diff.push_back(llabs(a[i] - a[i+1]));
        } 
 
        
        vector<ll> suffi(n+1, 0);
        vector<ll> pref(n, 0);
        for(ll j=1; j<n; j++) {
            pref[j] = max(pref[j-1], diff[j-1]);
        }
        
        for(ll j=n-2; j>=0; j--){
            suffi[j] = max(suffi[j+1], diff[j]);
        } 
 
        int k1 = 0;
        for(int i=0; i<n-1; i++){
            if(diff[i] > diff[k1]) {
                k1 = i;
            }
        } 
 
        ll ans = diff[k1];
 
        auto base = [&](int l, int r, ll Gd) {
            ll c = 2*Gd;
 
            if(l > 0) {
                c = max(c, pref[l-1]);
                c = max(c, llabs(a[l-1] - 2*a[r]));
            }
            if(r<n-1) {
                c = max(c, suffi[r+1]);
                c = max(c, llabs(2*a[l] - a[r+1]));
            }
            return c;
        };
 
        {
            int l = k1 + 1;
            ll Gd = 0;
            for(int r=l; r<n; r++) {
                if(r>l) {
                    Gd = max(Gd, diff[r-1]);
                }
                ans = min(ans, base(l, r, Gd));
            }
        }
 
        {
            int r = k1;
            ll Gd = 0;
            for(int l = r; l >= 0; l--) {
                if(l < r) {
                    Gd = max(Gd, diff[l]);
                }
                ans = min(ans, base(l, r, Gd));
            }
        }
 
        cout <<ans<<'
';
    }
 
    return 0;
}