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
 
        int answer=0;
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++){
            int b;
            cin>>b;
            if(a[i]-b > 0){
                answer+=a[i]-b;
            }
        }
        answer++;
        cout<<answer<<'
';
    }
 
    
 
    return 0;
}