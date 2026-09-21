#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n, x, y, z;
        cin>>n>>x>>y>>z;
        
        cout<<n-min({x,y,z})<<'
';
        
    }
 
    
 
    return 0;
}