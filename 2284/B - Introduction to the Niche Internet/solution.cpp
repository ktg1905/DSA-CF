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
        
 
        sort(a.begin(), a.end(), greater<ll>());
 
        vector<ll> b;
        ll sum=0;
        for(ll i=k-1; i>=0; i--){
            b.push_back(a[i]);
            sum+=a[i];
        }
        ll f=0;
        for(ll i=k; i<n; i++){
            if(sum > a[i]*i){
                b.push_back(a[i]);
                sum+=a[i];
            }
            else{
                f=1;
                break;
            }
        }
 
        if(f==1){
            cout<<"NO"<<'
';
        }
        else{
            cout<<"YES"<<'
';
 
            for(ll i=0; i<n; i++){
                cout<<b[i]<<" ";
            }
            cout<<'
';
        }
 
 
    }
 
    
 
    return 0;
}