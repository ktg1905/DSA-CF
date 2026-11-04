#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d", &t);
    string out;
    while (t--) {
        int n;
        cin>>n;
 
        int q = 31 - __builtin_clz(n);  
 
        int size1 = q + 3;               
        vector<int> bbvec(size1, 0);
        vector<int> bbmask(size1, 0);
        vector<char> hass(size1, 0);
        vector<int> slots;                
        int X = 0;
 
        for (int a = 1; a <= n; a++) {
            X ^= a;
            int vv = a ^ (a << 1);
            int mask = 0;
            while (vv) {
                int h = 31 - __builtin_clz(vv);
                if (!hass[h]) {
                    mask ^= 1 << slots.size();
                    slots.push_back(a);
                    hass[h] = 1;
                    bbvec[h] = vv;
                    bbmask[h] = mask;
                    break;
                }
                vv ^= bbvec[h];
                mask ^= bbmask[h];
            }
        }
 
        int res = -1;
        int targets[2] = {(1 << (q + 2)) - 2, (1 << (q + 2)) - 1};
        for (int T : targets) {
            int need = T ^ X;
            int mask = 0;
            bool ok = true;
            while (need) {
                int h = 31 - __builtin_clz(need);
                if (!hass[h]) { ok = false; break; }
                need ^= bbvec[h];
                mask ^= bbmask[h];
            }
            if (ok) { res = mask; break; }
        }
 
        vector<int> d(n + 1, 0);
        for (int j = 0; j < (int)slots.size(); j++)
            if ((res >> j) & 1) d[slots[j]] = 1;
 
        for (int i = 1; i <= n; i++) {
            out += char('0' + d[i]);
            out += (i == n ? '
' : ' ');
        }
    }
    cout<<out;
    return 0;
}