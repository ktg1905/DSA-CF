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
 
        string a, b;
        cin>>a>>b;
 
        int cnt=0;
        for(char c: a){
            if(c=='f'){
                cnt++;
            }
        }
        for(char c: b){
            if(c=='f'){
                cnt++;
            }
        }
 
        cout<<cnt%2<<'
';
 
    }
 
    
 
    return 0;
}