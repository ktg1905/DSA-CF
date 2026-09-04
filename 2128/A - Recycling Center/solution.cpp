#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int c;
        cin>>n>>c;
 
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
 
        sort(a.begin(), a.end());
 
        int j=0;
        while((j<n)&&(j<=c)){
            j++;
        }
        if(j==0){
            cout<<n<<'
';
        }
        else{
            j--;
            int t=0;
 
            while(j>=0){
                if(a[j]*pow(2,t) <= c){
                    t++;
                }
                j--;
            }
            cout<<n-t<<'
';
 
        }
    }
 
    
 
    return 0;
}