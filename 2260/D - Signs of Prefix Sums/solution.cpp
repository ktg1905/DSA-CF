#include <bits/stdc++.h>
using namespace std;
 
bool possible(const string &s, int C) {
    bool dp[7] = {};
 
    dp[3] = true;
 
    for (char c : s) {
        bool ndp[7] = {};
 
        for (int prev = -3; prev <= 3; prev++) {
            if (!dp[prev + 3])
                continue;
 
            for (int cur = -3; cur <= 3; cur++) {
            
                if (cur == prev)
                    continue;
 
                if (abs(cur - prev) > C)
                    continue;
 
                if (c == '+' && cur <= 0)
                    continue;
 
                if (c == '-' && cur >= 0)
                    continue;
 
                if (c == '0' && cur != 0)
                    continue;
 
                ndp[cur + 3] = true;
            }
        }
 
        memcpy(dp, ndp, sizeof(dp));
    }
 
    for (int v = -3; v <= 3; v++) {
        if (dp[v + 3])
            return true;
    }
 
    return false;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
 
        cin >> n >> s;
 
        if (possible(s, 1))
            cout << 1 << '
';
        else if (possible(s, 2))
            cout << 2 << '
';
        else if (possible(s, 3))
            cout << 3 << '
';
        else
            cout << -1 << '
';
    }
 
    return 0;
}