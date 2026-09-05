#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        vector<vector<int>> pos(n + 1);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
 
            if (a[i] <= n) {
                pos[a[i]].push_back(i);
            }
        }
 
        if (pos[0].empty()) {
            cout << "YES
";
            cout << string(n, 'A') << '
';
            continue;
        }
 
        if (pos[0].size() == 1) {
            cout << "NO
";
            continue;
        }
 
        int k = 0;
        while (k <= n && pos[k].size() >= 2) {
            k++;
        }
 
        string ans(n, 'C');
 
        for (int x = 0; x < n; x++) {
 
            if (x < k) {
                ans[pos[x][0]] = 'A';
 
                ans[pos[x][1]] = 'B';
 
                for (int j = 2; j < (int)pos[x].size(); j++) {
                    ans[pos[x][j]] = 'A';
                }
            }
            else if (x == k) {
                for (int id : pos[x]) {
                    ans[id] = 'C';
                }
            }
        }
 
        cout << "YES
";
        cout << ans << '
';
    }
 
    return 0;
}