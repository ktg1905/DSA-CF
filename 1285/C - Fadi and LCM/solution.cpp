#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void divisors(ll n, vector<ll> &div){
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            div.push_back(i);
 
            if(i!=n/i){
                div.push_back(n/i);
            }
        }
    }
    sort(div.begin(), div.end());
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
        ll n;
        cin>>n;
 
        vector<ll> div;
        divisors(n, div);
        ll ans = LONG_LONG_MAX;
        for(ll i=0; i<div.size(); i++){
            if(gcd(div[i], n/div[i])==1){
                ans = min(ans, max(div[i], n/div[i]));
            }
        }
        cout<<min(ans, n/ans)<<" "<<max(ans, n/ans)<<'
';
    
 
    
 
    return 0;
}