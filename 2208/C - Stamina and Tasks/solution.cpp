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
 
        vector<long double> c;
        vector<long double> p;
        for(int i=0; i<n; i++){
            long double x;
            long double y;
            cin>>x>>y;
 
            c.push_back(x);
            long double r = y/100.0;
            p.push_back(r);
        }
 
        long double ans = 0.0;
 
        
        
        for(int i=n-1; i>=0; i--){
            ans = max(ans, c[i]+(1-p[i])*ans);
        }
        
        cout<<fixed<<setprecision(10)<<ans<<'
';
 
    }
 
    
 
    return 0;
}