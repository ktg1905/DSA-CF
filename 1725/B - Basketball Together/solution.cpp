#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
        int n, d;
        cin>>n>>d;
 
        vector<int> p;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            p.push_back(x);
        }
        sort(p.begin(), p.end(), greater<int>());
 
        int ans=0;
        int idx=0;
        for(int i=0; i<n; i++){
            if(p[i]<=d){
                idx = i;
                break;
            }
            ans++;
        }
 
        if(p[n-1]>d){
            cout<<n<<'
';
        }
        
        else{
 
            int size = n-idx;
            while(idx<n && size>=0){
                int m = d/p[idx];
                if(size-m-1 >= 0){
                    ans++;
                    size = size-m-1;
                    idx++;
                }
                else{
                    break;
                }
            }
            cout<<ans<<'
';        
        }
 
 
    
 
    return 0;
}