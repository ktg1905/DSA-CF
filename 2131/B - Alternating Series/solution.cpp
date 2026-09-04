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
 
        if(n%2==0){
            for(int i=1; i<n; i++){
                if(i%2==1){
                    cout<<"-1 ";
                }
                else{
                    cout<<"3 ";
                }
            }
            cout<<"2"<<'
';
        }
        else{
            for(int i=1; i<=n; i++){
                if(i%2==1){
                    cout<<"-1 ";
                }
                else{
                    cout<<"3 ";
                }
            }
            cout<<'
';
        }
    }
 
    
 
    return 0;
}