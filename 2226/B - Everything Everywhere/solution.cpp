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
        int answer=0;
        for(int i=0; i<n-1; i++){
            if(max(a[i], a[i+1])-min(a[i], a[i+1]) == gcd(a[i], a[i+1])){
                answer++;
            }
        }
        cout<<answer<<'
';
    }
 
    
 
    return 0;
}