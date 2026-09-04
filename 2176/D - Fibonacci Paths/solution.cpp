#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int64 MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int64> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
 
        vector<int> U(m), V(m);
        vector<vector<int>> inEdges(n), outEdges(n);
        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            --u; --v;
            U[i] = u; V[i] = v;
            outEdges[u].push_back(i);
            inEdges[v].push_back(i);
        }
 
        // dp per directed edge: number of fibonacci paths ending with ... -> U[e] -> V[e]
        vector<int64> dp(m, 1); // each edge itself is a path of length 2
 
        // order nodes by their a[v] increasing
        vector<int> order(n);
        iota(order.begin(), order.end(), 0);
        stable_sort(order.begin(), order.end(), [&](int x, int y){
            if (a[x] != a[y]) return a[x] < a[y];
            return x < y;
        });
 
        for (int idx = 0; idx < n; ++idx) {
            int v = order[idx];
 
            // build map from value a[u] -> sum dp[u->v] over incoming edges u->v
            // reserve to reduce rehashing
            int degIn = (int)inEdges[v].size();
            unordered_map<int64,int64> M;
            M.reserve(max(1, degIn * 2));
            for (int eid : inEdges[v]) {
                int u = U[eid];
                int64 key = a[u];
                int64 val = dp[eid];
                auto it = M.find(key);
                if (it == M.end()) M.emplace(key, val % MOD);
                else it->second = (it->second + val) % MOD;
            }
 
            if (M.empty()) continue;
 
            // for each outgoing edge v->w, check need = a[w] - a[v]
            for (int eid2 : outEdges[v]) {
                int w = V[eid2];
                int64 need = a[w] - a[v];
                if (need <= 0) continue; // next term must be strictly greater
                auto it = M.find(need);
                if (it != M.end()) {
                    dp[eid2] += it->second;
                    if (dp[eid2] >= MOD) dp[eid2] -= MOD;
                }
            }
        }
 
        // answer is sum of dp over all edges
        int64 ans = 0;
        for (int i = 0; i < m; ++i) {
            ans += dp[i];
            if (ans >= MOD) ans -= MOD;
        }
        cout << ans % MOD << '
';
    }
    return 0;
}