#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
 
        vector<vector<int>> a;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            int l;
            cin>>l;
            vector<int> s;
            s.push_back(l);
 
            for(int j=0; j<l; j++){
                int x;
                cin>>x;
                s.push_back(x);
                mp[x]++;
            }
            a.push_back(s);
        }
 
        int answer=0;
 
        if(mp.size()==m){
            answer++;
 
            int flag=0;
            
            for(int i=0; i<n; i++){
                
                int ok=1;
                for(int j=1; j<=a[i][0]; j++){
                    mp[a[i][j]]--;
                    if(mp[a[i][j]]==0){
                        ok = 0;
                    }
                }
 
                if(ok){
                    answer++;
                }
                if(answer>=3){
                    flag=1;
                    break;
                }
                
                for(int j=1; j<=a[i][0]; j++){
                    mp[a[i][j]]++;
                }
 
            }
            if(flag==1){
                cout<<"yes"<<'
';
            }
            else{
                cout<<"no"<<'
';
            }
        }
        else{
            cout<<"no"<<'
';
        }
 
    }
 
    
 
    return 0;
}