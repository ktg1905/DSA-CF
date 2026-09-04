#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        string a;
        int m;
        string b;
        string c;
 
        cin>>n>>a>>m>>b>>c;
 
        string ans="";
        string ans1="";
        string ans2="";
        for(int i=m-1; i>=0; i--){
            if(c[i]=='V'){
                ans1+=b[i];
            }
        }
        for(int i=0; i<m; i++){
            if(c[i]=='D'){
                ans2+=b[i];
            }
        }
        
        ans = ans1 + a + ans2;
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}