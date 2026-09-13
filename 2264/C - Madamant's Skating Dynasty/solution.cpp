#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 998244353;
 
ll modpow(ll x, ll y) {
    ll res1 = 1;
 
    while (y) {
        if (y & 1)
            res1 = res1 * x % MOD;
 
        x = x * x % MOD;
        y >>= 1;
    }
 
    return res1;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<ll> a;
 
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
 
        sort(a.begin(), a.end(), greater<ll>());
 
        vector<ll> pref(n);
        pref[0] = a[0] % MOD;
 
        for (int i = 1; i < n; i++) {
            pref[i] = (pref[i - 1] + a[i]) % MOD;
        }
 
        ll T = 1;
        for (int i = 1; i < n; i++) {
            T = T * i % MOD;
        }
 
        ll ans = 0;
        for (int i = 1; i < n; i++) {
 
            ll w =
                T * modpow(i, MOD - 2) % MOD;
 
            ll c =
                w * pref[i - 1] % MOD;
 
            c = (c - (a[i] % MOD) * T % MOD + MOD) % MOD;
 
            ans = (ans + c) % MOD;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}