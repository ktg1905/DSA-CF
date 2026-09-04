#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int a;
        int b;
 
        cin>>n>>a>>b;
 
        if(n%2 == b%2){
            if(a<=b){
                cout<<"yes"<<'
';
            }
            else{
                if(a%2 == b%2){
                    cout<<"yes"<<'
';
                }
                else{
                    cout<<"no"<<'
';
                }
            }
        }
        else{
            cout<<"no"<<'
';
        }
    }
 
    
 
    return 0;
}