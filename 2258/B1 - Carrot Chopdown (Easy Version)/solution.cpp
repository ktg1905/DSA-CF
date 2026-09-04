#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
 
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
 
            a.push_back(x);
        }
 
        vector<int> b(m+1, 0);
        vector<int> suff(m+1, 0);
        for(int i=0; i<n; i++){
            b[a[i]]++;
        }
 
        suff[m]=b[m];
        for(int i=m-1; i>=0; i--){
            suff[i] = suff[i+1]+b[i];
        }
 
        int ans=0;
 
        for(int i=1; i<m+1; i++){
            if(i*2 <= m){
                ans= max(ans, suff[i]+b[2*i]);
            }
            else{
                ans = max(ans, suff[i]);
            }
        }
        cout<<ans<<'
';
        
 
    }
 
    
 
    return 0;
}