#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x%3==1){
                mp[1]++;
            }
            else if(x%3==2){
                mp[2]++;
            }
            else{
                mp[0]++;
            }
        }
        int answer=0;
        
        answer = mp[0] + min(mp[1], mp[2]) + (max(mp[1], mp[2]) - min(mp[1], mp[2]))/3;
        cout<<answer<<'
';
    }
 
    
 
    return 0;
}