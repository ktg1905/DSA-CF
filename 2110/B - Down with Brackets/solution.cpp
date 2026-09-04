#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int flag=0;
        stack<char> st;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            if(s[i]==')'){
                st.pop();
 
                if((s[i]==')') && (s[i+1]=='(') && (st.size()==0)){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
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