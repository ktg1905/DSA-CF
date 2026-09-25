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
 
        char c;
        cin>>c;
        string s;
        cin>>s;
 
        int i=0;
        int j=n-1;
        int ans=0;
        while(i<=j){
            if(s[i]!=s[j]){
                if(s[i]!=c && s[j]!=c){
                    ans=ans+2;
                }
                else{
                    ans++;
                }
            }
            i++;
            j--;
        }
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}