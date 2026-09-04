#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 998244353;
 
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
        int answer=0;
 
        long long xyz=a[0];
        for(int i=1; i<n; i++){
            xyz=xyz^a[i];
        }
        if(xyz==0){
            answer= (answer+1)%MOD;
        }
 
        for(int i=0; i<n; i++){
            long long y = xyz^a[i];
            if(y<a[i]){
                answer = (answer+1)%MOD;
            }
        }
 
        if(n==1){
            cout<<"0"<<'
';
        }
        else{
            cout<<answer<<'
';
        }
 
    }
 
    
 
    return 0;
}