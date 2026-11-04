#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
 
        vector<vector<int>> gf(n + 1);
        for (int i = 0; i < n - 1; i++) {
            int x, y;
            cin>>x>>y;
            gf[x].push_back(y);
            gf[y].push_back(x);
        }
 
        if (n%2 == 0) {
            cout<<n+1<<'
';
            continue;
        }
 
        int LOGs = 1;
        while ((1 << LOGs) <= n){
            LOGs++;
        }
            
        vector<vector<int>> upp(LOGs, vector<int>(n + 1, 0));
 
 
        vector<int> dep(n + 1, 0);
        vector<int> order;
        order.reserve(n);
        order.push_back(1);
        upp[0][1] = 0;
 
        for (size_t idx = 0; idx < order.size(); idx++) {
            int v = order[idx];
            for (int w : gf[v]) {
                if (w == upp[0][v]) continue;
                upp[0][w] = v;
                dep[w] = dep[v] + 1;
                order.push_back(w);
            }
        }
        for (int j = 1; j < LOGs; j++)
            for (int v = 1; v <= n; v++){
                upp[j][v] = upp[j - 1][upp[j - 1][v]];
            }
 
        auto lca = [&](int a, int b) {
            if (dep[a] < dep[b]) swap(a, b);
            int diff = dep[a] - dep[b];
            for (int j = 0; j < LOGs; j++)
                if (diff >> j & 1) a = upp[j][a];
            if (a == b) return a;
            for (int j = LOGs - 1; j >= 0; j--)
                if (upp[j][a] != upp[j][b]) {
                    a = upp[j][a];
                    b = upp[j][b];
                }
            return upp[0][a];
        };
 
        int bestKK = n, bestVall = -1;
        for (int k = n; k <= n + 2; k++) {
            vector<int> cnt(n + 1, 0);
            for (int i = 1; i <= n; i++) {
                int j = k - i;
                if (j < 1 || j > n || i >= j) continue;
                int l = lca(i, j);
                cnt[i]++;
                cnt[j]++;
                cnt[l]--;
                cnt[upp[0][l]]--;
            }
            int covered = 0;
            for (int idx = n - 1; idx >= 0; idx--) {
                int v = order[idx];
                if (cnt[v] > 0) covered++;
                cnt[upp[0][v]] += cnt[v];
            }
            if (covered > bestVall) {
                bestVall = covered;
                bestKK = k;
            }
        }
        cout<<bestKK<<'
';
    }
    return 0;
}