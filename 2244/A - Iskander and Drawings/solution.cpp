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
        string s;
        cin>>s;
 
        
        char prev=s[0];
        int length=0;
 
        if(prev=='#'){
            length=1;
        }
        int max_len=0;
 
        for(int i=1; i<n; i++){
            if(s[i]=='#'){
 
                if(prev=='*'){
                    length=1;
                }
                else{
                    length++;
                }
            }
            else{
                if(prev=='#'){
                    max_len = max(max_len, length);
                }
            }
            prev=s[i];
        }
        max_len = max(max_len, length);
 
        //cout<<max_len<<'
';
 
        if(max_len%2==0){
            cout<<max_len/2<<'
';
        }
        else{
            cout<<(max_len+1)/2<<'
';
        }
 
    }
 
    
 
    return 0;
}