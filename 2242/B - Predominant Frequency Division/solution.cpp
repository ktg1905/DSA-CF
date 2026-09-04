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
        
        int cnt1=0;
        int cnt2=0;
        int cnt3=0;
 
        vector<int> D;
        vector<int> F;
 
        for(int i=0; i<n; i++){
            if(a[i]==1){
                cnt1++;
                
            }
            else if(a[i]==2){
                cnt2++;
            }
            else{
                cnt3++;
            }
            int d = cnt1-cnt2-cnt3;
            D.push_back(d);
            int f = cnt1+cnt2-cnt3;
            F.push_back(f);
        }
 
        int flag=0;
 
        for(int i=0; i<n-2; i++){
            if(D[i]>=0){
                int j = i+1;
                while(j<n-1){
                    if(F[j] >= F[i]){
                        flag=1;
                        break;
                    }
                    j++;
                }
 
                if(flag==1){
                    break;
                }
            }
        }
 
        if(flag==1){
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