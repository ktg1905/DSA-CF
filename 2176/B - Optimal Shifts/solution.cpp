#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> pos;
        for (int i = 0; i < n; ++i) if (s[i] == '1') pos.push_back(i);
        // problem guarantees at least one '1'
        if (pos.empty()) { // safe-guard, though not needed
            cout << 0 << '
';
            continue;
        }
        int k = pos.size();
        int maxGap = 0;
        for (int i = 0; i + 1 < k; ++i) {
            maxGap = max(maxGap, pos[i+1] - pos[i]);
        }
        // cyclic gap from last to first
        maxGap = max(maxGap, pos[0] + n - pos[k-1]);
        // answer is maxGap - 1
        cout << (maxGap - 1) << '
';
    }
    return 0;
}