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
 
        int answer=0;
        int prev_max=0;
        int x;
        cin>>x;
        prev_max=x;
        answer++;
        for(int i=1; i<n; i++){
            int x;
            cin>>x;
            if(x >= prev_max){
                answer++;
                prev_max = x;
            }
        }
        cout<<answer<<'
';
    }
 
    
 
    return 0;
}