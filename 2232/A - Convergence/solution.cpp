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
 
        vector<int> v;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int mid = n/2;
        int i=mid;
        while((i<n)&&(v[mid]==v[i])){
            i++;
        }
        int more = n-i;
        i=mid;
        while((i>=0)&&(v[mid]==v[i])){
            i--;
        }
        int less = i+1;
 
        if(max(more, less) <=0){
            cout<<0<<'
';
        }
        else{
            cout<<max(more, less)<<'
';
        }
 
    }
 
    
 
    return 0;
}