#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        int m;
        cin>>n>>m;
 
        vector<int> freq(m+1, 0);
 
        for (int i=0; i<n; i++) {
            int a;
            cin >> a;
            freq[a]++;
        }
 
        vector<int> pref(m+1, 0);
 
        for (int i=1; i<=m; i++) {
            pref[i] = pref[i-1] + freq[i];
        }
 
        int K = 0;
        int power = 1;
 
        while (power < m) {
            power *=2;
            K++;
        }
 
        K = max(K, 1);
 
        vector<long long> ans(m + 1, 0);
 
        for (int k = 1; k <= K; k++) {
 
            long long cap = 1LL<<k;
            long long best = 0;
 
            for (int x = 1; x <= m; x++) {
 
                long long cur = 0;
 
                int limit = min<long long>(cap-1, m/x);
 
                for (int q=1; q<=limit; q++) {
                    int L = q*x;
                    int R = min(m, (q+1)*x - 1);
 
                    int cnt = pref[R] - pref[L-1];
 
                    cur += 1LL*q*cnt;
                }
 
                long long C = cap*x;
 
                if (C<=m) {
 
                    int c=(int)C;
                    cur += 1LL*cap*freq[c];
 
                    int greater = pref[m] - pref[c];
 
                    cur += 1LL*(cap - 1)*greater;
                }
                best = max(best, cur);
            }
 
            ans[k] = best;
        }
 
        for (int k = K+1; k<=m; k++) {
            ans[k] = ans[K];
        }
 
        for (int k=1; k<=m; k++) {
            cout << ans[k] << " ";
        }
 
        cout << '
';
    }
 
    return 0;
}