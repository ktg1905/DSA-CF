#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
 
        int dig=0;
        while(x!=0){
            x=x/10;
            dig++;
        }
        cout<<(int)pow(10, dig)+1<<endl;
    }
 
    
 
    return 0;
}