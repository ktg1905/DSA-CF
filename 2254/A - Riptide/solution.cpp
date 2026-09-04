#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        vector<int> a;
        for(int i=0; i<3; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
 
        sort(a.begin(), a.end());
        cout<<min(a[1]-a[0], a[2]-a[1])<<'
';
    }
 
    
 
    return 0;
}