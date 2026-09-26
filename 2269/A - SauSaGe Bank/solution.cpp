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
 
        ll ans=pow(2, n-k+1)+(k-1)*2;
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}