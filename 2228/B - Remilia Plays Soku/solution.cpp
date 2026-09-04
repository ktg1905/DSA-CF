#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int x1;
        int x2;
        int k;
        cin>>n>>x1>>x2>>k;
 
        if(n<=3){
            cout<<"1"<<'
';
        }
        else{
            int y = max(x1,x2)-min(x1,x2)+k;
            int z = n - (max(x1,x2)-min(x1,x2)) + k;
            cout<<min(y,z)<<'
';
        }
    }
 
    
 
    return 0;
}