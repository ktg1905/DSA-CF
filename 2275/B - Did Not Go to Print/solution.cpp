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
 
        stack<int> st;
        vector<int> ans;
 
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                st.push(i+1);
            }
            if(s[i]=='2'){
                if(st.size()!=0){
                    st.pop();
                    ans.push_back(i+1);
                }
            }
        }
 
        while(st.size()!=0){
            ans.push_back(st.top());
            st.pop();
        }
        cout<<ans.size()<<'
';
        sort(ans.begin(), ans.end());
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<'
';
    }
 
    
 
    return 0;
}