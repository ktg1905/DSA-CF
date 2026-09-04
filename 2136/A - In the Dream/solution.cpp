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
        int c;
        int d;
 
        cin>>a>>b>>c>>d;
 
        if(((min(a,b)+1)*2 >=max(a,b))&&((min(c-a, d-b)+1)*2 >=max(c-a, d-b))){
            cout<<"yes"<<'
';
        }
        else{
            cout<<"no"<<'
';
        }
    }
 
    
 
    return 0;
}