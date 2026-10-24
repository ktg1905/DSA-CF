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
        int is_0=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
            if(x==0){
                is_0=1;
            }
        }
        if(is_0==1){
            cout<<n<<'
';
            continue;
        }
        if(n==1 && a[0]!=0){
            cout<<0<<'
';
            continue;
        }
        sort(a.begin(), a.end());
        
        if(a[0]<n){
            cout<<n<<'
';
        }
        else{
            cout<<0<<'
';
        }
    }
 
    
 
    return 0;
}