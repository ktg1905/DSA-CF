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
 
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
 
        int min_diff=-1;
        for(int i=0; i<n-1; i=i+2){
            if(min_diff <= abs(a[i]-a[i+1])){
                min_diff = abs(a[i]-a[i+1]);
            }
        }
        cout<<min_diff<<'
';
    }
 
    
 
    return 0;
}