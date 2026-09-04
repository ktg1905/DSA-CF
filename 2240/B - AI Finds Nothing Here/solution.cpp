#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 998244353;
 
long long modpow(long long a, long long b) {
    long long ans = 1;
    a %= MOD;
 
    while (b > 0) {
        if (b & 1)
            ans = ans * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
 
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        long long n;
        long long m;
        long long r;
        long long c;
        cin>>n>>m>>r>>c;
 
        
        long long x = r*c - 1 + (r-1)*(m-c) + (c-1)*(n-r);
        long long exp = x%(MOD-1);
        cout<<modpow(2, exp)<<'
';
    }
 
    
 
    return 0;
}