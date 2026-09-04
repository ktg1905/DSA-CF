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
 
        unordered_map<char, int> mp;
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            char c = toupper(s[0]);
            mp[c]++;
        }
 
        vector<string> arr;
        int flag=0;
        for(int i=0; i<m; i++){
            string s;
            cin>>s;
            arr.push_back(s);
        }
 
        for(int i=0; i<m; i++){
            for(char c: arr[i]){
                if(mp.find(c)==mp.end()){
                    flag=1;
                    break;
                }
            }
            if (flag){
                break;
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
 
    
 
    return 0;
}