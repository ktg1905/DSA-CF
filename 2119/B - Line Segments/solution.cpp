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
        long long px;
        long long py;
        long long qx;
        long long qy;
        cin>>px>>py>>qx>>qy;
 
        long long sum=0;
        long long max_num=0;
        for(int i=0; i<n; i++){
            long long x;
            cin>>x;
 
            max_num = max(x, max_num);
            sum+=x;
        }
 
            long long d = (px-qx)*(px-qx) + (py-qy)*(py-qy);
            long long sqr = sum*sum;
            long long minm = max(0ll, 2*max_num - sum)*max(0ll, 2*max_num - sum);
            if((d <=sqr)&&(d>=minm)){
                cout<<"yes"<<'
';
            }
            else{
                cout<<"no"<<'
';
            }
    
    }
 
    
 
    return 0;
}