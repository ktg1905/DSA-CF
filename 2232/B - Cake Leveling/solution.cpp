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
 
        vector<long long> sums(n,0);
        long long x;
        cin>>x;
        sums[0]=x;
        for(int i=1; i<n; i++){
            long long x;
            cin>>x;
            sums[i]=sums[i-1]+x;
        }
        vector<long long> ans;
        ans.push_back(sums[0]);
        cout<<ans[0]<<" ";
        for(int i=1; i<n; i++){
            long long y = min(sums[i]/(i+1), ans[i-1]);
            ans.push_back(y);
            cout<<ans[i]<<" ";
        }
        cout<<'
';
    }
 
    
 
    return 0;
}