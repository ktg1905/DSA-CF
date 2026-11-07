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
 
        cout<<"? "<<1<<" "<<n<<'
';
        cout.flush();
 
        int res;
        cin>>res;
 
        if(res==-1){
            return 0;
        }
        if(res==n || res==0){
            cout<<"! NO"<<'
';
            cout.flush();
            continue;
        }
        cout<<"? "<<res+1<<" "<<n<<'
';
        cout.flush();
 
        int res2;
        cin>>res2;
 
        if(res2==-1){
            return 0;
        }
 
        if(res2==0){
            cout<<"! NO"<<'
';
            cout.flush();
        }
        else{
            cout<<"! YES"<<'
';
            cout.flush();
        }
 
    }
 
    
 
    return 0;
}