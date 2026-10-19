#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll n,h,k;
        cin>>n>>h>>k;
 
        vector<ll> a;
 
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
 
        vector<ll> pref(n, 0);
        pref[0]=a[0];
 
        for(ll i=1; i<n; i++){
            pref[i] = pref[i-1]+a[i];
        }
 
        int ext = h/pref[n-1];
        h = h%pref[n-1];
 
        if(h==0){
            cout<<(ext-1)*k + ext*n<<'
';
            continue;
        }
 
        ll m = 0;
        for(ll i=0; i<n; i++){
            if(pref[i]>=h){
                m = i;
                break;
            }
        }
        
        
 
        ll maxm = -1;
        for(ll i = m; i<n; i++){
            maxm = max(maxm, a[i]);
        }
 
        ll minm = m+1;
        for(ll i=0; i<m; i++){
            if(maxm > a[i]){
                ll g = maxm-a[i];
                auto it = lower_bound(pref.begin()+i, pref.begin()+m, h-g);
                if(it!=pref.end()){
                    minm = min(minm, (ll)(it-pref.begin()+1));
                }
            }
        }
 
        ll ans = minm + ext*(k+n);
        cout<<ans<<'
';
 
 
 
    }
 
    
 
    return 0;
}