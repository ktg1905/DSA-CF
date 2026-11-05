#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
 
        int g = gcd(s.size(),t.size());
 
        string A="";
        string B="";
 
        for(int i=0; i<t.size()/g; i++){
            A+=s;
        }
        for(int i=0; i<s.size()/g; i++){
            B+=t;
        }
 
        if(A==B){
            cout<<A<<'
';
        }
        else{
            cout<<-1<<'
';
        }
    }
 
    
 
    return 0;
}