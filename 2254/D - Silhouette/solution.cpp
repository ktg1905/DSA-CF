#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        vector<ll> b;
        map<ll, ll> mp;
 
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            b.push_back(x);
            mp[x]++;
        }
        
        if(mp.find(0)==mp.end()){
            cout<<"-1"<<'
';
        }
        else{
            if(mp.size()==1){
                for(int i=0; i<n; i++){
                    cout<<1<<" ";
                }
                cout<<'
';
            }
            else{
                ll sum=0;
                int flag=0;
                auto prev1 = mp.begin();
                for(auto it = mp.begin(); it!=mp.end(); ++it){
                    if(it != mp.begin()){
                        if((it->first-sum)%prev1->second != 0 || (it->first-sum)<=0){
                            flag=1;
                            break;
                        }
                        ll k = (it->first-sum)/prev1->second;
                        mp[prev1->first] = k;
                        if(prev1!=mp.begin()){
                            if(mp[prev1->first] <= mp[prev(prev1)->first]){
                                flag=1;
                                break;
                            }
                        }
                        sum = it->first;
                        prev1 = it;
                    }
                }
 
                auto it = prev(mp.end()); 
                mp[it->first] = mp[prev(it)->first]+1;
 
                if(flag==1){
                    cout<<"-1"<<'
';
                }
                else{
                    for(int i=0; i<n; i++){
                        cout<<mp[b[i]]<<" ";
                    }
                    cout<<'
';
                }
 
            }
            
 
        }
 
 
    }
 
    
 
    return 0;
}