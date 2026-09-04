#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        long long x;
        long long y;
        cin>>x>>y;
        int flag=0;
        for(long long i=2; i*x<y; i++){
            if(y%(i*x) != 0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"no"<<'
';
        }
        else{
            cout<<"yes"<<'
';
        }
 
    }
 
    
 
    return 0;
}