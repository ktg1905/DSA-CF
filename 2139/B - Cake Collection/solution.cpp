#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        long long n;
        long long m;
        cin>>n>>m;
 
        vector<long long> a;
        for(long long i=0; i<n; i++){
            long long x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
 
        long long answer=0;
        if(m >= n){
            answer = (m-n+1)*a[0];
            for(long long i=2; i<=n; i++){
                answer+= (m-n+i)*a[i-1];
            }
        }
        else{
            for(long long i=1; i<=m; i++){
                answer+= i*a[n-m+i-1];
            }
        }
        cout<<answer<<'
';
    }
 
    
 
    return 0;
}