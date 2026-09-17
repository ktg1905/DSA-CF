#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
 
        string s;
        cin>>s;
 
        vector<int> a;
        int ones=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                ones++;
                a.push_back((i+1)%k);
            }
        }
 
        if(ones==0){
            cout<<"YES"<<'
';
            continue;
        }
 
        if(ones%2==0){
            unordered_map<int, int> mp;
            for(int i=0; i<a.size(); i++){
                mp[a[i]]++;
            }
            int flag=0;
            for(auto it: mp){
                if(it.second%2!=0){
                    flag=1;
                }
            }
 
            if(flag){
                cout<<"NO"<<'
';
            }
            else{
                cout<<"YES"<<'
';
            }
        }
        else{
            cout<<"NO"<<'
';
        }
    }
 
    
 
    return 0;
}