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
 
        vector<ll> a;
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
 
        ll ans=a[0];
        for(ll i=1; i<n; i++){
            ans = ans&a[i];
        }
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}