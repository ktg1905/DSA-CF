#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        multiset<ll> ms;
 
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            ms.insert(x);
        }
 
 
        auto it = ms.lower_bound(1);
 
        if(it ==ms.end()){
            cout<<"-1"<<'
';
        }
 
 
        else{
            vector<ll> a;
            a.push_back(*it);
            ms.erase(it);
            int flag=0;
 
            for(int i=1; i<n; i++){
                auto it = ms.lower_bound(1-a[i-1]);
 
                if(it == ms.end()){
                    flag=1;
                    break;
                }
 
                a.push_back(a[i-1]+*it);
                ms.erase(it);
            }
 
            if(flag==1){
                cout<<"-1"<<'
';
            }
            else{
                for(int i=0; i<n; i++){
                    cout<<a[i]<<" ";
                }
                cout<<'
';
            }
                
        }
 
        
    }
 
    
 
    
 
    return 0;
}