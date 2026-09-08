#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll x, y;
        cin>>x>>y;
        ll sum = x+y;
        ll a = 0;
 
        for(int bit=29; bit>=0; bit--){
            if(sum & (1LL << bit)){
                ll prob = a | (1LL << bit);
                if(prob<=x){
                    a = prob;
                }
            }
        }
 
        cout<<sum<<" "<<x-a<<'
';
    }
 
    
 
    return 0;
}