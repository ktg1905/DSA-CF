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
 
        int div_4=0;
        int odd=0;
        int even=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
 
            if(x%4==0){
                div_4++;
            }
            if(x%4!=0 && x%2==0){
                even++;
            }
            if(x%2!=0){
                odd++;
            }
        }
 
        cout<<max({div_4, even, odd})<<'
';
    }
 
    
 
    return 0;
}