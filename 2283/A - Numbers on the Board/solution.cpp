#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        ll l, r;
        cin >> l >> r;
 
        ll num = r - l + 1;
        ll sum = (l + r) * num / 2;
 
    
        if (l <= sum && sum <= r) {
            cout << 0 << '
';
        }
 
        else if (l > 0 || r < 0) {
            cout << num - 1 << '
';
        }
 
        else if (l == 0 || r == 0) {
            cout << num - 2 << '
';
        }
 
        else {
            ll q = min(-l, r);
            cout << num - 2 * q - 2 << '
';
        }
    }
 
    return 0;
}