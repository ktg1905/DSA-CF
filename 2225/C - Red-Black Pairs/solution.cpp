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
 
        vector<char> top;
        vector<char> bottom;
        for(int i=0; i<n; i++){
            char x;
            cin>>x;
            top.push_back(x);
        }
        for(int i=0; i<n; i++){
            char x;
            cin>>x;
            bottom.push_back(x);
        }
 
        vector<int> dp(n+1, 0);
 
        for(int i=0; i<n; i++){
            dp[i+1] = max(dp[i+1], dp[i]+(top[i]==bottom[i]));
 
            if(i>0){
                dp[i+1] = max(dp[i+1], dp[i-1]+(top[i]==top[i-1])+(bottom[i]==bottom[i-1]));
            }
        }
        cout<<n-dp[n]<<'
';
    }
 
    
 
    return 0;
}