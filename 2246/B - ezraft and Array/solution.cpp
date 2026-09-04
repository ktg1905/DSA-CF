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
 
        if(n==2){
            cout<<"-1"<<'
';
        }
        else{
            if(n==1){
                cout<<"1"<<'
';
            }
            else if(n==3){
                cout<<"1 2 3"<<'
';
            }
            else{
                cout<<"1 2 3 ";
                long long x=3;
                for(int i=4; i<=n; i++){
                    x=x*2;
                    cout<<x<<" ";
                }
                cout<<'
';
            }
        }
    }
 
    
 
    return 0;
}