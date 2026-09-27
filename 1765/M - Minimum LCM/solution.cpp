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
 
        ll p = n;
        for(ll i=2; i*i<=n; i++){
            if(n%i == 0){
                p=i;
                break;
            }
        }
        ll a = n/p;
        ll b = n-a;
        cout<<a<<" "<<b<<'
';
    }
 
    
 
    return 0;
}