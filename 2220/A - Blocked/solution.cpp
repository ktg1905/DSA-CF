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
        unordered_set<int> st;
        vector<int> a;
        int flag=0;
 
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(st.find(x) == st.end()){
                a.push_back(x);
                st.insert(x);
            }
            else{
                flag=-1;
            }
        }
        if(flag==-1){
            cout<<"-1"<<'
';
        }
        else{
            sort(a.begin(), a.end(), greater<int>());
            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<'
';
        }
    }
 
    
 
    return 0;
}