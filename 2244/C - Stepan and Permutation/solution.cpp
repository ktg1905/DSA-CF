#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int x;
        int y;
 
        cin>>n>>x>>y;
 
        vector<int> p;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            p.push_back(x);
        }
        int b = gcd(x,y);
        int flag=0;
        for(int i=0; i<n; i++){
            if(abs(i+1-p[i])%b!=0){
                flag=1;
                break;
            }
        }
        if(flag==1){
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