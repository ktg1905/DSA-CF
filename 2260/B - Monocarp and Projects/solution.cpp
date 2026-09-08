#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        ll x,y,k;
        cin >>x>>y>>k;
 
        ll d = y-x;
        ll ans = 0;
 
        ll i = 0;
 
        while (i < k && x + i <= d) {
            ans += d%(x + i);
            i++;
        }
 
        ans += (k-i)*d;
 
        cout << ans << '
';
    }
 
    return 0;
}