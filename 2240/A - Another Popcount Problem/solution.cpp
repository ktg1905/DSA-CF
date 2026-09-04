#include <bits/stdc++.h>
using namespace std;
 
int solve(int n, int k){
 
    int i=0;
    int answer=0;
 
    while(1<<i <= n){
        int take = min(k, n/(1<<i));
        answer+=take;
        n-=take*(1<<i);
        i++;
    }
    return answer;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
 
        cout<<solve(n, k)<<'
';
    }
 
    
 
    return 0;
}