#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll l, r;
        cin>>l>>r;
 
        vector<ll> ld;
        vector<ll> rd;
 
        while(l>0){
            ld.push_back(l%10);
            l = l/10;
        }
        while(r>0){
            rd.push_back(r%10);
            r = r/10;
        }
 
        reverse(ld.begin(), ld.end());
        reverse(rd.begin(), rd.end());
 
        ll ans=0;
        ll diff = abs(l-r);
        ll f=0;
        for(ll i=0; i<ld.size(); i++){
            if(abs(ld[i]-rd[i])>=2 && f==0){
                break;
            }
            if(ld[i]==rd[i] && f==0){
                ans+=2;
                continue;
            }
 
            if(abs(ld[i]-rd[i])==1 && f==0){
                ans++;
                f=1;
                continue;
            }
 
            if(f==1 && (ld[i]==9 && rd[i]==0)){
                ans++;
                continue;
            }
 
            if(f==1 && (abs(ld[i]-rd[i])>=0 || (ld[i]==0 && rd[i]==9))){
                break;
            }
 
 
        }
 
        cout<<ans<<'
';
 
    }
 
    
 
    return 0;
}