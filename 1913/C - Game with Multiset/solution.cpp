#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
        int m;
        cin>>m;
        vector<int> cnt(30, 0);
 
        while(m--){
            int x,y;
            cin>>x>>y;
 
            if(x==1){
                cnt[y]++;
            }
            else{
                ll remain = y;
                for(int i=29; i>=0; i--){
                    ll val = 1LL<<i;
                    ll take = min((ll)cnt[i], remain/val);
                    remain -= take*val;
                }
                if(remain==0){
                    cout<<"YES"<<'
';
                }
                else{
                    cout<<"NO"<<'
';
                }
            }
        }
 
 
    
 
    
 
    return 0;
}