#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<int> a(m+1, 0);
        for(int i=1; i<=m; i++){
            cin>>a[i];
        }
 
        sort(a.begin(), a.end());
 
        for(int i=1; i<=n; i++){
            for(int j=0; j<=2; j++){
                if(i<=n/2){
                    cout<<a[i]<<" "<<a[m-i+1]<<" ";
                }
                else{
                    cout<<a[m-i+n/2+1]<<" "<<a[i-n/2]<<" ";
                }
            }
            cout<<'
';
        }
    }
 
    
 
    return 0;
}