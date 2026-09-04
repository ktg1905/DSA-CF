#include <bits/stdc++.h>
using namespace std;
 
long long solve(long long n){
    long long answer=0;
 
    for(long long i=1; i<=n; i++){
        answer+=(n/i)*(n/i);
    }
    return answer;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<solve(n)<<'
';
    }
 
    
 
    return 0;
}