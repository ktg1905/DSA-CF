#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        vector<int> a;
        int f=0;
        ll sum=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            sum+=x;
            if(x!=1){
                f=1;
            }
            a.push_back(x);
        }
 
        if(f==0){
            cout<<-1<<'
';
            continue;
        }
 
        int f1=0;
        for(int i=1; i<n-1; i++){
            if(a[i]!=1){
                f1=1;
                break;
            }
        }
 
        if(f1==1){
            cout<<sum-1<<'
';
            continue;
        }
        cout<<a[0]+a[n-1]-1<<'
';
        
        
    }
 
    
 
    return 0;
}