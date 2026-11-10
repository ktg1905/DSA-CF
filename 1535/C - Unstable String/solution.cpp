#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        ll n = s.size();
 
        ll last[2] = {-1, -1};
 
        ll ans = 0;
 
        for (int i = 0; i < n; i++) {
 
            if (s[i] != '?') {
 
                int x = s[i] - '0';
                x ^= (i % 2);
 
                last[x] = i;
            }
 
            ans += i - min(last[0], last[1]);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}