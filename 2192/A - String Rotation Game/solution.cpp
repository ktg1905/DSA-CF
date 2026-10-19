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
 
        string s;
        cin>>s;
 
        if(n==1){
            cout<<1<<'
';
            continue;
        }
        int ans=0;
        int f = 0;
 
        char prev = s[0];
        for(int i=1; i<n; i++){
            if(prev==s[i]){
                f=1;
            }
            if(prev!=s[i]){
                ans++;
                prev = s[i];
            }
        }
        ans++;
 
        if(f && s[0]!=s[n-1]){
            cout<<ans+1<<'
';
        }
        else{
            cout<<ans<<'
';
        }
        
    }
 
    
 
    return 0;
}