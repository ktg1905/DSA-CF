#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
ll overlaps(ll n, ll m, ll i, ll j, ll k){
    return (min(j,k)+min(m-j+1, k)-k)*(min(i,k)+min(n-i+1, k)-k);
}
 
// j>=k & m-j+1>=k -> k
// j>=k & m-j+1<k -> m-j+1
// j<k & m-j+1>=k -> j
// j<k & m-j+1<k -> m-k+1
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll n,m,k,w;
        cin>>n>>m>>k>>w;
 
        vector<ll> val;
        vector<ll> a;
        for(ll i=0; i<w; i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end(), greater<ll>());
 
        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=m; j++){
                val.push_back(overlaps(n, m, i, j, k));
            }
        }
        sort(val.begin(), val.end(), greater<ll>());
 
        ll ans=0;
 
        for(ll i=0; i<w; i++){
            ans+=val[i]*a[i];
        }
 
        cout<<ans<<'
';
 
 
    }
 
    
 
    return 0;
}