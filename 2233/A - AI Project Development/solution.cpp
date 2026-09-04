#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int x;
        int y;
        int z;
        cin>>n>>x>>y>>z;
        int noAI=0;
        int AI=0;
 
        if(n%(x+y)==0){
            noAI = n/(x+y);
        }
        else{
            noAI = n/(x+y) + 1;
        }
 
        if(x*z >= n){
            if(n%x==0){
                AI = n/x;
            }
            else{
                AI = n/x + 1;
            }
        }
        else{
            if((n-x*z)%(x+10*y)==0){
                AI = (n-x*z)/(x+10*y) + z;
            }
            else{
                AI = (n-x*z)/(x+10*y) + 1 + z;
            }
        }
        
        cout<<min(AI, noAI)<<'
';
    }
 
    
 
    return 0;
}