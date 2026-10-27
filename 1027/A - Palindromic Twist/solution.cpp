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
 
        string s;
        cin>>s;
 
        int i=0; 
        int j=s.size()-1;
        int f=0;
        while(i<=j){
            int x1 = s[i];
            int x2 = s[j];
            if(abs(x1-x2)>2 || abs(x1-x2)==1){
                f=1;
                break;
            }
            
            i++;
            j--;
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