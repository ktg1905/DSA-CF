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
        vector<ll> ev;
        vector<ll> od;
 
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            if(i%2==0){
                ev.push_back(x);
            }
            else{
                od.push_back(x);
            }
        }
 
        ll ans=0;
        unordered_map<ll, pair<ll,ll>> mp;
        unordered_map<ll, vector<ll>> mp_eve;
        unordered_map<ll, vector<ll>> mp_odd;
 
        for(int i=0; i<ev.size()-2; i++){
            ll sum = ev[i]+ev[i+1]-ev[i+2];
            mp[sum].first++;
            mp_eve[sum].push_back(i);
        }
        for(int i=0; i<od.size()-2; i++){
            ll sum = od[i]+od[i+1]-od[i+2];
            mp[sum].second++;
            mp_odd[sum].push_back(i);
        }
 
        for(auto it: mp){
            ans+=it.second.first * it.second.second;
        }
 
        for(auto it: mp_eve){
            if(it.second.size()>1){
                ll j=0;
                for(ll i=0; i<it.second.size(); i++){
                    j = max(j, i+1);
 
                    while(j<it.second.size() && it.second[j]-it.second[i] <= 2){
                        j++;
                    }
 
                    ans+=it.second.size()-j;
                }
            }
        }
        for(auto it: mp_odd){
            if(it.second.size()>1){
                ll j=0;
                for(ll i=0; i<it.second.size(); i++){
                    j = max(j, i+1);
 
                    while(j<it.second.size() && it.second[j]-it.second[i] <= 2){
                        j++;
                    }
 
                    ans+=it.second.size()-j;
                }
            }
        }
 
        cout<<ans<<'
';
 
    }
 
    
 
    return 0;
}