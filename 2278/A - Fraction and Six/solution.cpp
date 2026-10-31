#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
 
        string p, q;
        cin>>p>>q;
 
        unordered_map<char, int> mp1;
        for(char c: p){
            mp1[c]++;
        }
        
        int f=0;
        for(int i=0; i<q.size(); i++){
            if(mp1.find(q[i])==mp1.end() || mp1[q[i]]==0){
                f=1;
                break;
            }
            else{
                mp1[q[i]]--;
            }
        }
 
        if(f==1){
            cout<<"NO"<<'
';
            continue;
        }
        else{
            int f1=0;
            int cnt=0;
            for(auto it: mp1){
                if(it.second > 0){
                    if(it.first!='s' && it.first!='i' && it.first!='x'){
                        f1=1;
                        break;
                    }
                    else if(it.first=='s' || it.first=='i' || it.first=='x'){
                        if(it.second > 1){
                            f1=1;
                            break;
                        }
                    }
                    cnt++;
                }
            }
 
            if(f1==1 || cnt<3){
                cout<<"NO"<<'
';
            }
            else if(cnt==3 && f1==0){
                cout<<"YES"<<'
';
            }
        }
        
    }
 
    
 
    return 0;
}