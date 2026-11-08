#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
 
        ll ans=0;
 
        ll a=1;
        while(a<=x/3){
            ll b=a;
            while(b<=(x-a)/2){
                if((n-(a*b))/(a+b) < (ll)1){
                    break;
                }
                ll val = min((n-(a*b))/(a+b), x-a-b)-b+1;
                if(val<1){
                    break;
                }
                if(a==b){
                    ans+=(ll)1+(ll)(val-1)*(ll)3;
                }
                else{
                    ans+=(ll)3+(ll)(val-1)*(ll)6;
                }
                
                b++;
            }
            
            a++;
        }
 
        cout<<ans<<'
';
    }
 
    
 
    return 0;
}