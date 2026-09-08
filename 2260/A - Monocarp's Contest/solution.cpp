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
 
        vector<int> a;
        int num_0=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
 
            a.push_back(x);
            if(x==0){
                num_0++;
            }
        }
 
        if(num_0<2){
            cout<<-1<<'
';
        }
        else{
            if(a[0]==1 && a[n-1]==1){
                cout<<2<<'
';
            }
            if(a[0]==0 && a[n-1]==1){
                cout<<1<<'
';
            }
            if(a[0]==1 && a[n-1]==0){
                cout<<1<<'
';
            }
            if(a[0]==0 && a[n-1]==0){
                cout<<0<<'
';
            }
        }
    }
 
    
 
    return 0;
}