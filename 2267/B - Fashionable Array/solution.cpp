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
 
        int fq[101] = {};
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            fq[x]++;
        }
 
        vector<int> ans;
 
        while (true) {
            bool fd = false;
 
            
            for (int x=100; x>=1; x--) {
                if (fq[x] > 0) {
                    ans.push_back(x);
                    fq[x]--;
                    fd = true;
                }
            }
 
            if (!fd)
                break;
        }
 
        for (int x : ans) {
            cout <<x<<" ";
        }
        cout <<'
';
    }
 
    return 0;
}