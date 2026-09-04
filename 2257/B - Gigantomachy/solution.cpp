#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
 
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        vector<int> b;
        for(int i=0; i<m; i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
 
        int turn1=0;
        int turn2=0;
        for(int i=0; i<n-1; i++){
            turn1+=a[i]-a[i+1]+1;
        }
        for(int i=0; i<m-1; i++){
            turn2+=b[i]-b[i+1]+1;
        }
        turn1+=a[n-1];
        turn2+=b[m-1];
 
        if(turn1>=turn2){
            cout<<"1"<<'
';
        }
        else{
            cout<<"2"<<'
';
        }
 
    }
 
    
 
    return 0;
}