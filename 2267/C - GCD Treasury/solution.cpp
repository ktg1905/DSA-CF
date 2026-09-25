#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n,x;
        cin >>n>>x;
 
        vector<int> a;
 
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
 
            a.push_back(x);
        }
 
        vector<int> b;
        for (int v:a) {
            int g=gcd(x, v);
 
            if (g>1){
                b.push_back(g);
            }
        }
 
        if (b.empty()) {
            cout <<0<<'
';
            continue;
        }
 
        sort(b.begin(), b.end());
        b.erase(unique(b.begin(), b.end()), b.end());
 
        vector<int> st = b;
 
        for (int i=0; i<(int)st.size(); i++) {
            for (int g:b) {
 
                int ng = gcd(st[i], g);
 
                if (ng==1){
                    continue;
                }
 
                bool found = false;
 
                for (int v:st) {
                    if (v==ng) {
                        found = true;
                        break;
                    }
                }
 
                if (!found){
                    st.push_back(ng);
                }
            }
        }
 
        ll ans = 0;
 
        for (int g : st) {
            ll curr = 0;
 
            for (int v:a) {
                if (v%g == 0){
                    curr += v;
                }
            }
 
            ans = max(ans, curr);
        }
 
        cout<<ans<<'
';
    }
 
    return 0;
}