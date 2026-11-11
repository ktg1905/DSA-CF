#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int dp[1001][1001];
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
 
        memset(dp, 0, sizeof(dp));
 
        for(int i = 1; i <= a.size(); i++){
            dp[i][0] = dp[i-1][0] + (a[i-1] != c[i-1]);
        }
 
        for(int j = 1; j <= b.size(); j++){
            dp[0][j] = dp[0][j-1] + (b[j-1] != c[j-1]);
        }
 
        for(int i=1; i<=a.size(); i++){
            for(int j=1; j<=b.size(); j++){
                int x=0;
                if(a[i-1] == c[i+j-1]){
                    x = dp[i-1][j];
                }
                else{
                    x = dp[i-1][j]+1;
                }
                int y=0;
                if(b[j-1] == c[i+j-1]){
                    y = dp[i][j-1];
                }
                else{
                    y = dp[i][j-1]+1;
                }
 
                dp[i][j] = min(x,y);
            }
        }
 
        cout<<dp[a.size()][b.size()]<<'
';
    }
 
    
 
    return 0;
}