#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
ll power(ll n){
    ll ans = 1;
    for(int i=0; i<n; i++){
        ans = ans<<1;
    }
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        vector<int> a(25, 0);
        for(int i=0; i<n; i++){
            int w;
            cin>>w;
            a[w]++;
        }
 
        ll x=0;
        ll y=0;
        int i=24;
        while(i>=0){
            if(a[i]<=0){
                i--;
                continue;
            }
 
            if(a[i]%2==0){
                x+=power(i)*(a[i]/2);
                y+=power(i)*(a[i]/2);
                i--;
                continue;
            }
            x+=power(i)*((a[i]+1)/2);
            y+=power(i)*(a[i]/2);
            a[i]=0;
 
            while(i>=0 && y<x){
                if(a[i]<=0){
                    i--;
                    continue;
                }
                ll m = power(i);
                while(a[i]>0 && y<x){
                    y+=m;
                    a[i]--;
                }
            }
        }
 
        cout<<x*y<<'
';
    }
 
    
 
    return 0;
}