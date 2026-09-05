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
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        vector<int> ones;
        vector<int> neg;
 
        for (int i = 0; i < n; i++) {
            if (a[i] == 1)
                ones.push_back(i);
 
            if (a[i] == -1)
                neg.push_back(i);
        }
 
        int bestL = -1;
        int bestR = -1;
        int bestLen = 0;
 
        if (!ones.empty()) {
 
            int firstOne = ones.front();
 
            for (int i = 0; i < firstOne; i++) {
                if (a[i] == -1) {
                    int len = firstOne - i + 1;
 
                    if (len > bestLen) {
                        bestLen = len;
                        bestL = i;
                        bestR = firstOne;
                    }
 
                    break; 
                }
            }
 
            for (int i = 0; i + 1 < (int)ones.size(); i++) {
 
                int L = ones[i];
                int R = ones[i + 1];
 
                int len = R - L + 1;
 
                if (len > bestLen) {
                    bestLen = len;
                    bestL = L;
                    bestR = R;
                }
            }
 
            int lastOne = ones.back();
 
            for (int i = n - 1; i > lastOne; i--) {
                if (a[i] == -1) {
                    int len = i - lastOne + 1;
 
                    if (len > bestLen) {
                        bestLen = len;
                        bestL = lastOne;
                        bestR = i;
                    }
 
                    break; 
                }
            }
        }
 
        else {
 
            if (neg.size() >= 2) {
 
                int L = neg.front();
                int R = neg.back();
 
                bestL = L;
                bestR = R;
                bestLen = R - L + 1;
            }
 
            else if (neg.size() == 1) {
 
                bestL = neg[0];
                bestR = neg[0];
                bestLen = 1;
            }
        }
 
        for (int i = 0; i < n; i++) {
            if (a[i] == -1)
                a[i] = 0;
        }
 
        if (bestL != -1) {
            a[bestL] = 1;
            a[bestR] = 1;
        }
 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
 
        cout << '
';
    }
 
    return 0;
}