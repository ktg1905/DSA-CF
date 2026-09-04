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
        vector<int> b;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
 
        vector<long long> dp;
        long long sum=0;
        int flag=0;
        for(int i=0; i<n; i++){
            sum+=b[i]-a[i];
            if(sum<0){
                flag=1;
                break;
            }
            else{
                dp.push_back(sum);
            }
        }
        if(flag==1){
            cout<<"no"<<'
';
        }
        else{
            cout<<"yes"<<'
';
        }
    }
 
    
 
    return 0;
}