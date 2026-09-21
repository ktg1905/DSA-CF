#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        if (s[0] == '1') {
            int ans1=0;
            for(char c: s){
                if(c=='0'){
                    ans1++;
                }
            }
            cout<<ans1<<'
';
            continue;
        }
 
 
        int ct = count(s.begin() + 1, s.end(), '0');
        int ans = ct;
 
        for (int i = 1; i < n; i++) {
            if (s[i] == '0')
                ct--;
            else
                ct++;
 
            ans = min(ans, ct);
        }
 
        cout << ans << '
';
    }
}