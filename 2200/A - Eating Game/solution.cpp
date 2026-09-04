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
 
        sort(a.begin(), a.end());
        int ans=0;
        int num = a[n-1];
        for(int i=n-1; i>=0; i--){
            if(a[i]==num){
                ans++;
            }
        }
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}