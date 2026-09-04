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
 
        int neg=0;
        int zero=0;
 
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x==-1){
                neg++;
            }
            else if(x==0){
                zero++;
            }
        }
        int answer=0;
 
        if(neg%2==0){
            cout<<zero<<'
';
        }
        else{
            cout<<zero+2<<'
';
        }
 
    }
 
    
 
    return 0;
}