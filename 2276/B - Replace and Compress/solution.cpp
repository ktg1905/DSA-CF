#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
 
        int ans=0;
        int num_1=0;
        int num_0=0;
        char prev=s[0];
        if(prev=='1'){
            num_1++;
        }
        if(prev=='0'){
            num_0++;
        }
        for(int i=1; i<s.size(); i++){
            if(s[i]!=prev){
                if(prev=='0'){
                    num_0++;
                }
                if(prev=='1'){
                    num_1++;
                }
                prev=s[i];
            }
        }
        if(prev=='0'){
            num_0++;
        }
        if(prev=='1'){
            num_1++;
        }
 
        set<int> st;
        st.insert(num_0);
        for(int i=0; i<s.size()-2; i++){
            if(s[i]==s[i+2]){
                if(s[i]==s[i+1]){
                    st.insert(num_0+1);
                }
                else{
                    st.insert(num_0-1);
                }
            }
        }
 
        cout<<st.size()<<'
';
    }
 
    
 
    return 0;
}