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
 
        vector<ll> eve;
        ll max_odd=-1;
        ll num_e=0;
        ll num_o=0;
        ll ans=0;
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            if(x%2==0){
                eve.push_back(x);
                num_e++;
            }
            if(x%2!=0){
                max_odd=max(max_odd, x);
                num_o++;
            }
        }
 
        if(num_e==0 || num_o==0){
            cout<<0<<'
';
            continue;
        }
 
        sort(eve.begin(), eve.end(), greater<ll>());
        ll idx=eve.size();
        for(ll i=0; i<eve.size(); i++){
            if(eve[i]<max_odd){
                idx=i;
                break;
            }
        }
 
        ans+=eve.size()-idx;
        
        if(idx==0){
            cout<<eve.size()<<'
';
            continue;
        }
 
        
        for(ll i=idx; i<eve.size(); i++){
            max_odd+=eve[i];
        }
 
        ll i = idx-1;
        while(i>=0 && eve[i]<max_odd){
            max_odd+=eve[i];
            ans++;
            i--;
        }
        if(i<0){
            //cout<<"hi"<<'
';
            cout<<ans<<'
';
            continue;
        }
 
        ans+=2+i;
        cout<<ans<<'
';
 
 
        
 
 
    }
 
    
 
    return 0;
}