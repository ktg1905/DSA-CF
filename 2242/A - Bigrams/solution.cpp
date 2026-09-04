#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
 
        int num=0;
        vector<int> a;
        for(int i=0; i<k; i++){
            int x;
            cin>>x;
            a.push_back(x);
            if(x>=2){
                num++;
            }
        }
        int max_num=0;
        for(int i=0; i<k; i++){
            if(max_num <= a[i]){
                max_num = a[i];
            }
        }
 
        if((k==1)&&(a[0]>2)){
            cout<<"yes"<<'
';
        }
        else if((k==1)&&(a[0]<=2)){
            cout<<"no"<<'
';
        }
        else{
            if((num>=2)||(max_num > 2)){
                cout<<"yes"<<'
';
            }
            else{
                cout<<"no"<<'
';
            }
        }
    }
 
    
 
    return 0;
}