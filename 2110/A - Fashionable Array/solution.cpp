#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
 
        if(a[0]%2!=a[n-1]%2){
            int i=0;
            int num1=0;
            for(; i<n; i++){
                if(a[i]%2!=a[0]%2){
                    break;
                }
                else{
                    num1++;
                }
            }
 
            int num2=0;
            for(int j=n-1; j>=0; j--){
                if(a[j]%2!=a[n-1]%2){
                    break;
                }
                else{
                    num2++;
                }
            }
            cout<<min(num1, num2)<<'
';
 
        }
        else{
            cout<<"0"<<'
';
        }
    }
 
    
 
    return 0;
}