#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int t;
    cin>>t;
    
    while(t){
        
        int x;
        int y;
        cin>>x>>y;
        
        if(x==y){
            cout<<"yes"<<endl;
        }
        else if(x<y){
            cout<<"no"<<endl;
        }
        else{
            int a = __gcd(x,y);
            if(a==y){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
        
        t--;
    }
    return 0;
}