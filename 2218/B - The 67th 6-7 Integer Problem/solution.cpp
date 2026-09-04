#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
 
        vector<int> a;
        for(int i=0; i<7; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
 
        sort(a.begin(), a.end());
        int sum=0;
        for(int i=0; i<6; i++){
            sum-=a[i];
        }
        sum+=a[6];
        cout<<sum<<'
';
 
    }
 
    
 
    return 0;
}