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
 
        vector<int> a_1;
        vector<int> a_0;
 
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                a_0.push_back(i+1);
            }
            if(s[i]=='1'){
                a_1.push_back(i+1);
            }
        }
 
        int num_1 = a_1.size();
        int num_0 = a_0.size();
 
        if(num_0%2==0 && num_1%2!=0){
            cout<<-1<<'
';
            continue;
        }
 
        if(num_1%2==0){
            cout<<num_1<<'
';
            for(int c: a_1){
                cout<<c<<" ";
            }
            if(num_1!=0){
                cout<<'
';
            }
            continue;
        }
        if(num_0%2!=0){
            cout<<num_0<<'
';
            for(int c: a_0){
                cout<<c<<" ";
            }
            cout<<'
';
            continue;
        }
    }
 
    
 
    return 0;
}