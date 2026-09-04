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
 
        int max_num=-1;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            max_num = max(max_num, x);
        }
        cout<<n*max_num<<'
';
    }
 
    
 
    return 0;
}