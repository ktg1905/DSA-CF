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
 
        int x = n/2020;
        int y = n/2021;
        if(x==y){
            int f=0;
            for(int i=0; i<=x; i++){
                if(2020*i + 2021*(x-i) == n){
                    f=1;
                    break;
                }
            }
            if(f){
                cout<<"YES"<<'
';
            }
            else{
                cout<<"NO"<<'
';
            }
        }
 
        else{
            int f=0;
            for(int i=0; i<=x; i++){
                if(2020*i + 2021*(x-i) == n){
                    f=1;
                    break;
                }
            }
            for(int i=0; i<=y; i++){
                if(2020*i + 2021*(y-i) == n){
                    f=1;
                    break;
                }
            }
            if(f){
                cout<<"YES"<<'
';
            }
            else{
                cout<<"NO"<<'
';
            }
        }
    }
 
    
 
    return 0;
}