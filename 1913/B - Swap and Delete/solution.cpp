#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int num_1=0;
        int num_0=0;
        for(char c: s){
            if(c=='1'){
                num_1++;
            }
            if(c=='0'){
                num_0++;
            }
        }
 
        if(num_1==num_0){
            cout<<0<<'
';
            continue;
        }
 
        int ans=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                num_1--;
            }
            if(s[i]=='1'){
                num_0--;
            }
 
            if(num_1<0 || num_0<0){
                ans = s.size()-i;
                break;
            }
        }
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}