#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int is_prime(ll a){
    for(ll i=2; i*i<=a; i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll d;
        cin>>d;
 
        ll x=1+d;
        while(!is_prime(x)){
            x++;
        }
        ll y = x+d;
        while(!is_prime(y)){
            y++;
        }
 
        ll ans = x*y;
        cout<<ans<<'
';
 
    }
 
    
 
    return 0;
}