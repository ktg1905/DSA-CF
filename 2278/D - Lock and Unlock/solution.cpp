#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        ll n;
        cin>>n;
 
        vector<ll> a;
 
        ll minm = LLONG_MAX;
        ll maxm = LLONG_MIN;
 
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            minm = min(minm, x);
            maxm = max(maxm, x);
            a.push_back(x);
        }
        sort(a.begin(), a.end());
 
        ll c = 0;
        ll med=a[n/2];
 
        ll oper = maxm-minm;
 
        for(ll i=0; i<n; i++){
            c+=abs(a[i]-med);
        }
 
        cout<<c<<" "<<oper<<'
';
    }
 
    return 0;
}