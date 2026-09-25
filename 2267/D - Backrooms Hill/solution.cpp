#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
 
        vector<int> parity(n + 1);
 
        for (int i=1; i<=n; i++) {
            int x;
            cin>>x;
            parity[x] = i%2;
        }
 
        bool dp[2] = {true, false};
 
        for (int v = 1; v < n; v++) {
            bool ndp[2] = {false, false};
 
            for (int c = 0; c < 2; c++) {
                if (dp[c]==false){
                    continue;
                }
 
                int left_parity = (c+1)%2;
 
                if (left_parity == parity[v]) {
                    ndp[c^1] = true;
                }
 
                int right_parity = (n-v+c+1)%2;
 
                if (right_parity == parity[v]) {
                    ndp[c] = true;
                }
            }
 
            dp[0] = ndp[0];
            dp[1] = ndp[1];
        }
 
        bool flag = false;
 
        for (int c=0; c<2; c++) {
            if (dp[c] && (c+1)%2 == parity[n]) {
                flag = true;
            }
        }
 
        if(flag){
            cout<<"YES"<<'
';
        }
        else{
            cout<<"NO"<<'
';
        }
    }
 
    return 0;
}