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
 
        vector<int> a;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
            mp[x]++;
        }
 
        if(mp.find(mp.size())!=mp.end()){
            cout<<mp.size()<<'
';
        }
        else{
            sort(a.begin(), a.end());
            int ans=0;
            for(int i=0; i<n; i++){
                if(a[i]>mp.size()){
                    ans = a[i];
                    break;
                }
            }
            cout<<ans<<'
';
        }
    }
 
    
 
    return 0;
}