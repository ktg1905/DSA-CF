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
 
        int min_d=10;
        while(n!=0){
            
            min_d = min(n%10, min_d);
            
            n=n/10;
        }
        cout<<min_d<<'
';
    }
 
    
 
    return 0;
}