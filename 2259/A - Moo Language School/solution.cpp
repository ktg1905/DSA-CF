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
 
        int ans=0;
        for(int i=0; i<n; i=k+i){
            int flag=0;
            for(int j=0; j<k; j++){
                if(s[j+i]=='0'){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                ans++;
            }
            
        }
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}