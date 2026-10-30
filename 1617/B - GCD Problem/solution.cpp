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
 
        if(n%2==0){
            cout<<(n-1)/2<<" "<<(n-1)/2+1<<" "<<1<<'
';
            continue;
        }
 
        int summ = n-1;
        int idx = 0;
        for(int i=3; i<n; i=i+2){
            if(gcd(i, n-i-1)==1){
                idx=i;
                break;
            }
        }
        if(idx!=0){
            cout<<idx<<" "<<n-idx-1<<" "<<1<<'
';
            continue;
        }
        for(int i=3; i<=n; i=i+2){
            if(n%i==0){
                int sum = (n-i)/i;
                cout<<1*i<<" "<<(sum-1)*i<<" "<<i<<'
';
                break;
            }
        }
    }
 
    
 
    return 0;
}