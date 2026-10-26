#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
bool check1(ll k, const vector<ll>& a, int x) {
    int n = a.size();
    vector<ll> isolat;
 
    for (int i=0; i<n; i++) {
        bool lef = (i==0 || a[i]-a[i-1] > k);
        bool righ = (i==n-1 || a[i+1]-a[i] > k);
 
        if (lef && righ) {
            isolat.push_back(a[i]);
        }
    }
 
    int use = 0;
    int i = 0;
 
    while (i < (int)isolat.size()) {
        use++;
 
        if (use > x) {
            return false;
        }
        ll cover1 = isolat[i] + 2*k;
 
        while (i<(int)isolat.size() && isolat[i]<=cover1) {
            i++;
        }
    }
 
    return true;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, x;
        cin >>n>>x;
 
        vector<ll> a;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
 
        ll low = 1;
        ll high = 1000000000LL;
 
        while (low < high) {
            ll mid = low+(high-low)/2;
 
            if (check1(mid, a, x)) {
                high = mid;
            } 
            else {
                low = mid+1;
            }
        }
 
        cout<<low<<'
';
    }
 
    return 0;
}