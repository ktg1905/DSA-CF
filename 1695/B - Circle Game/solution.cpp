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
 
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
 
        if(n%2==1){
            cout<<"Mike"<<'
';
            continue;
        }
        int min_m=INT_MAX;
        int idx_m=0;
        int min_j=INT_MAX;
        int idx_j=0;
 
        for(int i=0; i<n; i++){
            if(i%2==0){
                if(min_m > a[i]){
                    min_m = a[i];
                    idx_m= i;
                }
            }
            if(i%2==1){
                if(min_j > a[i]){
                    min_j = a[i];
                    idx_j= i;
                }
            }
        }
        
 
        if(idx_m < idx_j){
            if(min_m <= min_j){
                cout<<"Joe"<<'
';
                continue;
            }
            if(min_m > min_j){
                cout<<"Mike"<<'
';
                continue;
            }
        }
        if(idx_m > idx_j){
            if(min_m >= min_j){
                cout<<"Mike"<<'
';
                continue;
            }
            if(min_m < min_j){
                cout<<"Joe"<<'
';
                continue;
            }
        }
    }
 
    
 
    return 0;
}