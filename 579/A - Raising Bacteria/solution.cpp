#include<iostream>
using namespace std;
 
int main(){
    int x;
    cin>>x;
 
    int ans=0;
    while (x!=0)
    {
        x = x & (x-1);
        ans++;
    }
    cout<<ans;
    
    
    return 0;
}