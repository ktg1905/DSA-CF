#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        cin>>a>>b;
 
        if(a==b){
            cout<<"0"<<'
';
        }
        else if(gcd(a,b) == min(a,b)){
            cout<<"1"<<'
';
        }
        else{
            cout<<"2"<<'
';
        }
    }
 
    
 
    return 0;
}