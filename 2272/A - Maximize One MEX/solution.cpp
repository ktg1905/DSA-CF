#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n,k;
        cin >>n>>k;
 
        vector<int> a;
        vector<int> posn(n);
 
        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;
            a.push_back(x);
            posn[a[i]] = i;
        }
 
        int p1 = n-k+1;
        int mex = 0;
        vector<bool> pres(n + 1, false);
 
        for (int i = 0; i < p1; i++) {
            pres[a[i]] = true;
        }
 
        while (pres[mex]) {
            mex++;
        }
 
        if (mex == p1) {
            cout << -1 << '
';
            continue;
        }
 
        int wrongn = -1;
        for (int i = 0; i < p1; i++) {
            if (a[i] >= p1) {
                wrongn = i;
                break;
            }
        }
 
        if (wrongn != -1) {
            cout << wrongn + 1 << " " << posn[mex] + 1 << '
';
        } else {
            cout << -1 << '
';
        }
    }
 
    return 0;
}