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
 
        vector<long long> a;
        for(int i=0; i<n; i++){
            long long x;
            cin>>x;
            a.push_back(x);
        }
 
        int flag=0;
        
        for(long long i=1; i<n; i++){
            a[i]+=a[i-1];
            long long y = ((i+1)*(i+2))/2;
            if(y > a[i]){
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