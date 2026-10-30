#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
        string s, t;
        cin>>s>>t;
 
        if(s.size()==1 || t.size()==1){
            cout<<-1<<'
';
        }
        else{
            vector<char> alp = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
            int len=INT_MAX;
            int i_min=-1;
            int j_min=-1;
            for(int i=0; i<26; i++){
                int k=1;
                int j=t.size()-2;
 
                while(k<s.size() && s[k]!=alp[i]){
                    k++;
                }
                if(k==s.size()){
                    continue;
                }
 
                while(j>=0 && t[j]!=alp[i]){
                    j--;
                }
                if(j<0){
                    continue;
                }
 
                if(len > t.size()+k-j){
                    len = t.size()+k-j;
                    i_min = k;
                    j_min = j;
                }
            }
 
            if(i_min<0 || j_min<0){
                cout<<-1<<'
';
            }
            else{
                string ans="";
                for(int i=0; i<=i_min; i++){
                    ans+=s[i];
                }
                for(int j=j_min+1; j<t.size(); j++){
                    ans+=t[j];
                }
 
                cout<<ans<<'
';
            }
        }
    
 
    
 
    return 0;
}