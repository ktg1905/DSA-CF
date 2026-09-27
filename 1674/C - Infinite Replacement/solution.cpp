#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        string s, q;
        cin>>s>>q;
 
        if((ll)q.size()>1){
            int flag=0;
            for(char c: q){
                if(c=='a'){
                    flag=1;
                    break;
                }
            }
            if(flag){
                cout<<-1<<'
';
                continue;
            }
        }
        if((ll)q.size()==1 && q[0]=='a'){
            cout<<1<<'
';
            continue;
        }
 
        ll ans = pow(2, s.size());
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}