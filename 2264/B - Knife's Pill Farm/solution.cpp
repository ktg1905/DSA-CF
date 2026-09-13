#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
 
        vector<int> a;
 
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
 
        priority_queue<ll> p;
 
        ll sum=0;
        ll ans = LLONG_MIN;
        for(int j=0; j<n; j++){
            if(p.size()==m-1){
                ll score = 1LL*m*a[j] - sum;
                ans = max(ans, score);
            }
 
            p.push(a[j]);
            sum+=a[j];
 
            if(p.size()>m-1){
                sum-=p.top();
                p.pop();
            }
        }
 
        cout<<ans<<'
';
 
    }
 
    
 
    return 0;
}