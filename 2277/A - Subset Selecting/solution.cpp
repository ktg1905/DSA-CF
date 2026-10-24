#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
 
        vector<int> freq(n+1, 0);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            freq[x]++;
        }
 
        vector<int> pref(n+1, 0);
        pref[0] = freq[0];
        for(int i=1; i<=n; i++){
            pref[i]+=pref[i-1]+freq[i];
        }
 
 
        for(int i=0; i<=n; i++){
            if(pref[i]<k*(i+1) || freq[i]==0){
                cout<<i<<'
';
                break;
            }
        }
 
    }
 
    
 
    return 0;
}