#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        int a;
        int b;
        cin>>n>>m>>a>>b;
 
        if(gcd(n,a)==1 && gcd(m,b)==1){
            if(gcd(n,m)<=2){
                cout<<"yes"<<'
';
            }
            else{
                cout<<"no"<<'
';
            }
        }
        else{
            cout<<"no"<<'
';
        }
    }
 
    
 
    return 0;
}