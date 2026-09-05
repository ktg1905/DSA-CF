#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll n, c;
        cin>>n>>c;
 
        vector<ll> a;
        ll sum=0;
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            a.push_back(x);
            sum+=x;
        }
 
        sort(a.begin(), a.end());
        ll base = sum - n*c;
 
        ll i=0;
        ll j=n-1;
        while(i<j){
            if(min(a[i], a[j])>c){
                break;
            }
            base+=c-min(a[i], a[j]);
            i++;
            j--;
        }
        cout<<base<<'
';
    }
 
    
 
    return 0;
}