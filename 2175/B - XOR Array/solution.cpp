#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n, l, r;
        cin>>n>>l>>r;
 
        vector<int> b(n+1, 0);
        for(int i=1; i<=n; i++){
            if(i==r){
                b[i] = l-1;
            }
            else{
                b[i] = i;
            }
        }
 
        for(int i=1; i<=n; i++){
            int x = b[i]^b[i-1];
            cout<<x<<" ";
        }
        cout<<'
';
    }
 
    
 
    return 0;
}