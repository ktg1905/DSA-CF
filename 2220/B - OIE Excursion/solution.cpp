#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
 
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x%m);
        }
        int cont=1;
        int flag=0;
        for(int i=1; i<n; i++){
            if(a[i]==a[i-1]){
                cont++;
                if(cont > m-1){
                    flag=1;
                    break;
                }
            }
            else{
                cont=1;
            }
        }
        if(flag==0){
            cout<<"yes"<<'
';
        }
        else{
            cout<<"no"<<'
';
        }
    }
 
    
 
    return 0;
}