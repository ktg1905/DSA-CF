#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        long long a;
        long long b;
        long long x;
        long long y;
        cin>>a>>b>>x>>y;
 
        if(a==b){
            cout<<"0"<<'
';
        }
        else if (a>b){
            if((a-b==1)&&(a%2==1)){
                cout<<y<<'
';
            }
            else{
                cout<<"-1"<<'
';
            }
        }
        else{
            if((b-a)%2==0){
                cout<<((b-a)/2)*(x+min(x,y))<<'
';
            }
            else{
                if(a%2==0){
                    cout<<min(x,y)*(((b-a)/2) + 1) + x*((b-a)/2)<<'
';
                }
                else{
                    cout<<x*(((b-a)/2) + 1) + min(x,y)*((b-a)/2)<<'
';
                }
            }
        }
    }
 
    
 
    return 0;
}