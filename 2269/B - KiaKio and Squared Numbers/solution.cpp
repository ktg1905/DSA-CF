#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int next(ll x) {
    int sum = 0;
 
    while (x > 0) {
        int d = x%10;
        sum += d*d;
        x /= 10;
    }
 
    return sum;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
 
        int n;
        cin>>n;
        vector<ll> a(n);
 
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
 
        map<int, ll> freq1;
 
        for (int i = 0; i < n; i++) {
 
            int x = next(a[i]);
 
            for (int step=0; step<810; step++) {
                x = next(x);
            }
            freq1[x]++;
        }
 
        ll ans = 0;
        for (auto &[x, cnt] : freq1) {
            ans += cnt * (cnt - 1) / 2;
        }
 
        cout<<ans<<'
';
    }
 
    return 0;
}