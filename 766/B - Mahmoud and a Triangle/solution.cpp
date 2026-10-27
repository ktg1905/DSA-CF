#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
        int n;
        cin>>n;
 
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
 
        int f=0;
        for(int i=0; i<n-2; i++){
            if(a[i]+a[i+1]>a[i+2]){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"YES"<<'
';
        }
        else{
            cout<<"NO"<<'
';
        }
 
    
 
    
 
    return 0;
}