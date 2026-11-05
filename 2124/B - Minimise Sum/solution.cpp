#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
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
 
        int min_m=INT_MAX;
        ll sum=0;
        for(int i=0; i<n; i++){
            min_m=min(min_m, a[i]);
            sum+=(ll)min_m;
        }
 
        if(n>2){
            cout<<min({sum, (ll)(a[0]+a[1]), (ll)(a[0]+min(a[0], a[1]+a[2]))})<<'
';
            continue;
        }
        if(n==2){
            cout<<min(sum, (ll)(a[0]+a[1]))<<'
';
            continue;
        }
 
    }
 
    
 
    return 0;
}