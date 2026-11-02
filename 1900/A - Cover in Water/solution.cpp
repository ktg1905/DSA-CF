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
 
        int prev=s[0];
        int temp=0;
        int ans=0;
 
        if(s[0]=='.'){
            temp++;
        }
        int f=0;
        for(int i=1; i<n; i++){
            if((s[i]=='.' && s[i-1]=='.')||(s[i]=='.' && s[i-1]=='#')){
                temp++;
            }
            if(s[i]=='#' && s[i-1]=='.'){
                if(temp>2){
                    f=1;
                    break;
                }
                ans+=min(2, temp);
 
                temp=0;
            }
        }
        if(f==1 || temp>2){
            cout<<2<<'
';
            continue;
        }
        ans+=min(2, temp);
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}