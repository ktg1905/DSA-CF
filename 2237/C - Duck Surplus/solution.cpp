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
        if(n==1){
            cout<<a[0]<<'
';
        }
        else{
            long long final=a[0];
            int flag=0;
            for(int i=1; i<n; i++){
                if(a[i]<final && flag==0){
                    final+=a[i];
                }
                else if(a[i]>=final && flag==0){
                    flag=1;
                    final=0;
                }
                else if(flag==1 && a[i-1]>a[i]){
                    flag=0;
                    final = a[i-1]+a[i];
                }
            }
            if(final==0){
                cout<<a[a.size()-1]<<'
';
            }
            else{
                cout<<final<<'
';
            }
        }
    }
 
    
 
    return 0;
}