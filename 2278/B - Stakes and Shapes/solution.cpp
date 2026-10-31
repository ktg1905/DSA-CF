#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
 
        if(max({x,y,z})==x){
            for(int i=0; i<x+y+z; i++){
                cout<<"P";
            }
            cout<<'
';
            continue;
        }
        if(max({x,y,z})==y){
            for(int i=0; i<x+y+z; i++){
                cout<<"R";
            }
            cout<<'
';
            continue;
        }
        if(max({x,y,z})==z){
            for(int i=0; i<x+y+z; i++){
                cout<<"S";
            }
            cout<<'
';
            continue;
        }
    }
 
    
 
    return 0;
}