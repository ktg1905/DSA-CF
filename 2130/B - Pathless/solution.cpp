#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int s;
        cin>>n>>s;
 
        int sum=0;
        vector<int> a;
        int cnt1=0;
        int cnt2=0;
        int cnt0=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
            if(x==1){
                cnt1++;
            }
            else if(x==2){
                cnt2++;
            }
            else {
                cnt0++;
            }
            sum+=x;
        }
        if(s<sum){
            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<'
';
        }
        else if(s==sum){
            cout<<"-1"<<'
';
        }
        else{
            if(s-sum==1){
                for(int i=1; i<=cnt0; i++){
                    cout<<"0 ";
                }
                for(int i=1; i<=cnt2; i++){
                    cout<<"2 ";
                }
                for(int i=1; i<=cnt1; i++){
                    cout<<"1 ";
                }
                cout<<'
';
            }
            else{
                cout<<"-1"<<'
';
            }
        }
    }
 
    
 
    return 0;
}