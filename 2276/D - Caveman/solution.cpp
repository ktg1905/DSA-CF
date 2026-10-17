#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
 
        unordered_map<int, int> mp;
        for(int i=0; i<m; i++){
            int x, y;
            cin>>x>>y;
            mp[x]++;
            mp[y]++;
        }
 
        if(mp.size()!=n){
            cout<<"Brain Melt"<<'
';
            continue;
        }
 
        int flag=0;
        int key=0;
        int maxm=0;
        for(auto it: mp){
            if(maxm < it.second){
                maxm = it.second;
                key = it.first;
            }
        }
        if(maxm == n-1){
            mp[key]=1;
            int f=0;
            for(auto it: mp){
                if(it.second != 1){
                    f=1;
                    break;
                }
            }
            if(f==1){
                cout<<"Many"<<'
';
            }
            else{
                cout<<"2"<<'
';
            }
        }
        else{
            cout<<"Many"<<'
';
        }
    }
 
    
 
    return 0;
}