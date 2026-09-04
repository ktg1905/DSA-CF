#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;
        vector<int64> evens;
        vector<int64> odds;
        for (int i = 0; i < n; ++i) {
            int64 x; cin >> x;
            if (x % 2 == 0) evens.push_back(x);
            else odds.push_back(x);
        }
        int E = (int)evens.size();
        int O = (int)odds.size();
 
        // If there are no odd coins, every time sum becomes even -> bag empties, so all answers 0.
        if (O == 0) {
            for (int k = 1; k <= n; ++k) {
                cout << 0 << (k == n ? '
' : ' ');
            }
            continue;
        }
 
        // pick the largest odd as the single odd in final block
        int64 max_odd = *max_element(odds.begin(), odds.end());
 
        // Sort evens descending and compute prefix sums
        sort(evens.begin(), evens.end(), greater<int64>());
        vector<int64> prefE(E + 1, 0);
        for (int i = 0; i < E; ++i) prefE[i + 1] = prefE[i] + evens[i];
 
        // ro = number of remaining odds after choosing the final odd
        int ro = O - 1;
 
        auto interval_has_even = [](int A, int B)->bool {
            if (A > B) return false;
            if ((A % 2) == 0) return true;      // A is even
            return (A + 1 <= B);               // next number (A+1) is even and inside interval
        };
 
        // For each k, binary search the largest feasible t (number of evens in final block).
        // t in [0 .. min(E, k-1)]. For a candidate t, r = k-1-t extras must be chosen
        // from re = E - t evens and ro odds with total sum even.
        for (int k = 1; k <= n; ++k) {
            int max_t_allowed = min(E, k - 1);
            if (max_t_allowed < 0) { // k == 0 impossible, but safe-guard
                cout << 0 << (k == n ? '
' : ' ');
                continue;
            }
 
            // Precompute A = max(0, r - re) where r depends on t, but note
            // when r = k-1 - t and re = E - t, r - re = (k-1 - t) - (E - t) = k-1 - E,
            // so A = max(0, k-1 - E) is independent of t.
            int A = max(0, k - 1 - E);
            int best_t = -1;
 
            // Binary search for largest t in [0..max_t_allowed] such that feasible
            int lo = 0, hi = max_t_allowed;
            while (lo <= hi) {
                int mid = (lo + hi) >> 1;
                int t = mid;
                int r = k - 1 - t;     // number of extras to choose
                if (r < 0) { // too many evens chosen for final, not possible
                    hi = mid - 1;
                    continue;
                }
                int re = E - t;
                int B = min(ro, r);
                // We need to check if there exists an even number o' in [max(0, r-re) .. B]
                int lowO = max(0, r - re);
                bool feasible = interval_has_even(lowO, B);
                if (feasible) {
                    best_t = t;    // mid feasible, try to increase t
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
 
            if (best_t == -1) {
                cout << 0;
            } else {
                int64 ans = max_odd + prefE[best_t];
                cout << ans;
            }
            cout << (k == n ? '
' : ' ');
        }
    }
    return 0;
}