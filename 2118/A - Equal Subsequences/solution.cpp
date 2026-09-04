#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
 
        for(int i=1; i<=n-k; i++){
            cout<<"0";
        }
        for(int i=n-k+1; i<=n; i++){
            cout<<"1";
        }
        cout<<'
';
    }
 
    
 
    return 0;
}