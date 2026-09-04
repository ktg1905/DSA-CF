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
 
        vector<int> ref = {-1,0,0,-1,-1,0,-1,0};
        vector<int> ref2 = {1,1,2,1,2,3,1,3,2,2,3,3};
        vector<int> ans;
        if(n%2==0){
            for(int i=1; i*2<=n; i++){
                for(int j=0; j<8; j++){
                    ans.push_back(ref[j]+2*i);
                }
            }
        }
        else{
            for(int i=0; i<12; i++){
                ans.push_back(ref2[i]);
            }
            for(int i=5; i<=n; i=i+2){
                for(int j=0; j<8; j++){
                    ans.push_back(ref[j]+i);
                }
            }
        }
 
        for(int i=0; i<4*n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<'
';
    }
 
    
 
    return 0;
}