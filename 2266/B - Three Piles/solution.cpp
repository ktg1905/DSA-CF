#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll a, b, c;
        cin>>a>>b>>c;
 
        if(a>=b){
            cout<<a-b+c<<'
';
        }
        else{
            if(b-a > abs(a+c-b)){
                cout<<b-a<<'
';
            }
            else{
                cout<<abs(a+c-b)<<'
';
            }
        }
    }
 
    
 
    return 0;
}