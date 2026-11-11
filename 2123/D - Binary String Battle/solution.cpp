#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
 
        int ones = count(s.begin(), s.end(), '1');
 
        if (ones <= k || 2 * k > n) cout << "Alice
";
        else cout << "Bob
";
    }
    return 0;
}