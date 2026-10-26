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
        ll sum=0;
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            sum+=x;
            a.push_back(x);
        }
 
        if(sum<=k){
            cout<<n<<'
';
            continue;
        }
 
        ll left = 0;
        ll right = n-1;
        ll front = (k+1)/2;
        ll back = k/2;
        ll ans=0;
        while(left<=right && front>=a[left]){
            front-=a[left];
            left++;
            ans++;
        }
        while(left<=right && back>=a[right]){
            back-=a[right];
            right--;
            ans++;
        }
 
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}