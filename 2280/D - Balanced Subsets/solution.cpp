#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
const ll MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        
        
        vector<char> pres(a[n-1]+4, 0);
        
        for(int i=0; i<n; i++){
            pres[a[i]]=1;
        }
 
        ll dp[8][3];
        ll ndd[8][3];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;
 
 
        for(int v=1; v<=a[n-1]+3; v++){
 
            memset(ndd, 0, sizeof(ndd));
 
            for(int mask = 0; mask < 8; mask++){
 
                for(int k = 0; k<3; k++){
 
                    ll curr = dp[mask][k];
 
                    if(!curr){
                        continue;
                    } 
 
                    for(int b=0; b<=1; b++){
                        if(b==1 && !pres[v]){
                            continue;
                        }
                        int ncc = k;
 
                        if(mask & 4){
                            int count = ((mask >> 1) & 1)+(mask & 1)+b;
                            if(count != 2) {
                                ncc++;
                            }
                        }
                        if(ncc > 2) {
                            continue;
                        }
                        int nmn = ((mask << 1) | b) & 7;
                        ndd[nmn][ncc] = (ndd[nmn][ncc] + curr) % MOD;
                    }
                }
            }
 
            memcpy(dp, ndd, sizeof(dp));
        }
 
        ll ans=0;
        for(int mask = 0; mask < 8; mask++){
            for(int k=0; k < 3; k++){
                ans = (ans + dp[mask][k]) % MOD;
            }
        }
        ans = (ans-1+MOD)%MOD;
        cout<<ans<<'
';
    }
 
    return 0;
}