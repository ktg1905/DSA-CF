#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        vector<int> x;
        for(int i=0; i<3; i++){
            int y;
            cin>>y;
            x.push_back(y);
        }
 
        sort(x.begin(), x.end());
 
        if(x[0]+x[1] >= x[2]){
            cout<<x[2]-x[0]<<'
';
        }
        else{
            cout<<x[1]<<'
';
        }
 
 
    }
 
    
 
    return 0;
}