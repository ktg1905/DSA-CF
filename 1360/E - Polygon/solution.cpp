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
        cin >> n;
 
        vector<vector<char>> mat(n, vector<char>(n));
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                char x;
                cin>>x;
                if(x=='
' || x==' '){
                    j=j-1;
                }
                else{
                    mat[i][j]=x;
                }
            }
        }
                
        
        
        int f=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]=='1'){
                    int f1=0;
                    int f2=0;
                    if(i<n-1 && mat[i+1][j]=='0'){
                        f1=1;
                    }
                    if(j<n-1 && mat[i][j+1]=='0'){
                        f2=1;
                    }
 
                    if(f1 && f2){
                        f=1;
                        break;
                    }
                }
 
                if(f==1){
                    break;
                }
            }
        }
 
        if(f==1){
            cout<<"NO"<<'
';
        }
        else{
            cout<<"YES"<<'
';
        }
        
 
 
    }
 
    
 
    return 0;
}