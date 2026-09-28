#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
 
        vector<int> a;
        vector<int> b;
 
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
 
        for(int i=0; i<n; i++){
            if(a[i]<b[i]){
                a[i] = b[i];
            }
        }
 
        for(int i=n-1; i>0; i--){
            if(a[i]>a[i-1]){
                a[i-1] = a[i];
            }
        }
 
        vector<int> pref(n);
        pref[0] = a[0];
        for(int i=1; i<n; i++){
            pref[i] = pref[i-1]+a[i];
        }
 
        for(int i=0; i<q; i++){
            int x,y;
            cin>>x>>y;
 
            cout<<pref[y-1]-pref[x-1]+a[x-1]<<" ";
        }
        cout<<'
';
 
    }
 
    
 
    return 0;
}