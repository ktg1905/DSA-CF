#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n>>k;
 
        vector<int> a;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
 
        int num=0;
        int answer=0;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                num++;
            }
            else{
                answer += (num+1)/(k+1);
                num=0;
            }
        }
        answer += (num+1)/(k+1);
        cout<<answer<<'
';
    }
 
    
 
    return 0;
}