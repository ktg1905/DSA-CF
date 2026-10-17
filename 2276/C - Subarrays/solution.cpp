#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
 
        vector<ll> a;
        vector<ll> p(n+1, 0);
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
        
        for(ll i=0; i<n; i++){
            p[i+1]= (p[i]+a[i])%k;
        }
        vector<ll> cnt(k, 0);
 
        ll r = k+1;
        ll l = 0;
        ll ans = 0;
        while(r<=n){
            cnt[p[l]]++;
            ans+=cnt[p[r]];
 
            l++;
            r++;
        }
 
        cout<<ans<<'
';
 
    }
 
    
 
    return 0;
}