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
 
        k=k-1;
 
        vector<int> h;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            h.push_back(x);
        }
 
        set<int> st;
 
        for(int i=0; i<n; i++){
            if(h[i]>=h[k]){
                st.insert(h[i]);
            }
        }
        vector<int> a;
        for(auto it: st){
            a.push_back(it);
        }
 
        int m = a.size();
 
        if(m==1){
            cout<<"yes"<<'
';
        }
        else{
        
        int flag=0;
        int next=1;
        int curr=0;
        int time=0;
        while(next<m){
            if(a[next] - a[curr] <= a[curr] - time){
                time += a[next] - a[curr];
                curr=next;
                next++;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"no"<<'
';
        }
        else{
            cout<<"yes"<<'
';
        }
 
        }
    }
 
    
 
    return 0;
}