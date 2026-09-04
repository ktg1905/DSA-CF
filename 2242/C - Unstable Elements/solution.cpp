#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
 
        unordered_map<int, int> mp;
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
 
        for(auto it: mp){
            a.push_back(it.second);
        }
        sort(a.begin(), a.end());
        int alive=0;
        
        int num=a.size()-alive;
 
        int iter=0;
        int answer=0;
 
        unordered_set<int> st;
        //st.insert(num);
        while(num>=1){
            if(n<=k){
                if((k-n)%num==0){
                    if(st.find(num)==st.end()){
                        answer++;
                        st.insert(num);
                    }
                }
            }
            n=n-num;
            if(n==0){
                break;
            }
            
 
            iter++;
            while((alive<a.size())&&(a[alive]<=iter)){
                alive++;
            }
            num = a.size() - alive;
            
            
            //cout<<"1: "<<mp[1]<<", 2: "<<mp[2]<<'
';
            //cout<<"n "<<n<<" num "<<num<<'
';
            
            //cout<<"in while num: "<<num<<'
';
 
        }
        cout<<answer<<'
';
    }
 
    
 
    return 0;
}