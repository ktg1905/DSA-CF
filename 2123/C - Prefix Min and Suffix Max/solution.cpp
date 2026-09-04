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
        set<int> st;
 
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
            st.insert(x);
        }
 
        auto it = st.end();
        --it;
 
        string answer="1";
        int prev_min=a[0];
        int suff_max = *it;
 
        for(int i=1; i<n-1; i++){
            prev_min = min(prev_min, a[i]);
            
            if(suff_max == a[i-1]){
                st.erase(suff_max);
                auto it = st.end();
                --it;
                suff_max = *it;
            }
            else{
                st.erase(a[i-1]);
            }
 
            if((prev_min==a[i])||(suff_max==a[i])){
                answer+="1";
            }
            else{
                answer+="0";
            }
        }
        cout<<answer+"1"<<'
';
        
    }
 
    
 
    return 0;
}