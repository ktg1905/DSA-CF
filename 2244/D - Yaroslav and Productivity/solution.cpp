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
        vector<int> b;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0; i<m; i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        sort(b.begin(), b.end());
        vector<vector<long long>> dp(n+1, vector<long long>(2, LONG_LONG_MIN));
        dp[n][0]=0;
 
        int k=m-1;
 
        for(int i=n-1; i>=0; i--){
            if((k>=0)&&(b[k]>=i+1)){
                while((k>=0)&&(b[k]>=i+1)){
                    dp[i][0] = a[i] + max(dp[i+1][0], dp[i+1][1]);
                    dp[i][1] = -a[i] + max(dp[i+1][0], dp[i+1][1]);
 
                    k--;
                }
            }
            else{
                dp[i][0] = a[i] + dp[i+1][0];
                if(dp[i+1][1]==LONG_LONG_MIN) continue;
 
                dp[i][1] = -a[i] + dp[i+1][1];
            }
        }
        cout<<max(dp[0][0], dp[0][1])<<'
';
 
    }
 
    
 
    return 0;
}