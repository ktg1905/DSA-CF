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
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
 
        vector<ll> ind;
        for(ll i=0; i<n-1; i++){
            if(a[i]>=2*a[i+1]){
                ind.push_back(i);
            }
        }
 
        ll leng = k+1;
        ll ans=0;
 
        if(ind.size()==0){
            cout<<n-leng+1<<'
';
            continue;
        }
        
        if(ind[0]+2-leng >= 1){
            ans+=ind[0]+2-leng;
        }
 
        for(ll i=0; i<ind.size()-1; i++){
            if(ind[i+1]-ind[i]+1-leng >=1){
                ans+=ind[i+1]-ind[i]+1-leng;
            }
        }
 
        if(n-ind[ind.size()-1]-leng >=1){
            ans+=n-ind[ind.size()-1]-leng;
        }
        
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}