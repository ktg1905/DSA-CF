#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll n,x,t;
        cin>>n>>x>>t;
 
        ll k = t/x;
        ll ans=0;
        if(k>=n-1){
            ans = (n*(n-1))/2;
            cout<<ans<<'
';
            continue;
        }
 
        ans = (n-1-k)*k + (k*k+k)/2;
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}