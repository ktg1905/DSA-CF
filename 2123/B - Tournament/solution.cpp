#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int j;
        int k;
        cin>>n>>j>>k;
 
        int max_num=0;
        int val=0;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
 
            if(i==j){
                val=x;
            }
            max_num = max(max_num, x);
        }
 
        if((k==1)&&(val!=max_num)){
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