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
        int m;
        cin>>m;
        string l, r;
        cin>>l>>r;
 
        unordered_set<int> st;
        int j=0;
        int f=0;
        for(int i=0; i<m; i++){
            for(int k=min(l[i],r[i]); k<=max(l[i],r[i]); k++){
                st.insert(k);
            }
            while(j<s.size() && st.size()!=0){
                if(st.find(s[j])!=st.end()){
                    st.erase(s[j]);
                    j++;
                }
                else{
                    j++;
                }
            }
 
            if(st.size()!=0){
                f=1;
                break;
            }
        }
 
        if(f==1){
            cout<<"YES"<<'
';
        }
        else{
            cout<<"NO"<<'
';
        }
    }
 
    
 
    return 0;
}