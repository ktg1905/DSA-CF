#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int which_pow(int n){
    int ans=0;
    while(n>1){
        n = n>>1;
        ans++;
    }
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n, w;
        cin>>n>>w;
        
        set<int> st;
        vector<int> pows(29, 0);
 
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            st.insert(x);
            pows[which_pow(x)]++;
        }
        
        int ans=0;
        while(st.size()!=0){
            int target = w;
            while(target>0){
                auto it = st.upper_bound(target);
                if(it == st.begin()){
                    break;
                }
                --it;
                target = target - *it;
                if(pows[which_pow(*it)]==1){
                    pows[which_pow(*it)]=0;
                    st.erase(*it);
                }
                else{
                    pows[which_pow(*it)]--;
                }
            }
            ans++;
        }
 
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}