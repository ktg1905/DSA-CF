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
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        
 
        for(int i=0; i<n; i++){
            if(a[i]%n != 0){
                a[i] = a[i] - (2*(a[i]%n) - n);
            }
        }
        
        if(n==2){
            cout<<a[1]<<" "<<a[0]<<'
';
        }
        else{
            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<'
';
        }
        
    }
 
    
 
    return 0;
}