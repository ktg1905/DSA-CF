#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
 
        sort(a.begin(), a.end(), greater<int>());
        long long ans=0;
 
        for(int i=0; i<n; i=i+2){
            ans+=a[i];
        }
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}