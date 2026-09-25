#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
        ll n;
        cin>>n;
 
        vector<ll> a;
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
        
        vector<ll> b(n);
        for(ll i=0; i<n; i++){
            b[i]=1;
        }
 
        ll j = n-1;
        for(ll i=n-1; i>=0; i--){
            while(j>=0 && i-j <= a[i]){
                if(i!=j){
                    b[j]=0;
                }
                j--;
            }
            
            if(j<0){
                break;
            }
        }
 
        ll ans=0;
        for(ll i=0; i<n; i++){
            if(b[i]==1){
                ans++;
            }
        }
        cout<<ans<<'
';
 
        
 
 
    
 
    
 
    return 0;
}