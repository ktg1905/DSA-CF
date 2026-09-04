#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        int x;
        int s;
        cin>>n>>x>>s;
 
        string u;
        cin>>u;
 
        vector<int> dp(x+1,-1);
        dp[x]=0;
        vector<int> temp(x+1,-1);
        temp[x]=0;
        for(char c: u){
            if(c=='I'){
                for(int i=0; i<=x; i++){
                    if(dp[i]!=-1){
                        if(i>0){
                            temp[i-1] = max(temp[i-1], dp[i]+1);
                        }
                    }
                }
                
            }
            else if(c=='E'){
                for(int i=0; i<=x; i++){
                    if(dp[i]!=-1){
                        int filler = (x-i)*s - dp[i];
                        if(filler > 0){
                            temp[i] = max(temp[i], dp[i]+1);
                        }
                    }
                }
                
            }
            else{
                for(int i=0; i<=x; i++){
                    if(dp[i]!=-1){
                        int filler = (x-i)*s - dp[i];
                        if(filler > 0){
                            temp[i] = max(temp[i], dp[i]+1);
                        }
                        if(i>0){
                            temp[i-1] = max(temp[i-1], dp[i]+1);
                        }
                    }
                }
            }
 
            dp=temp;
        }
 
        cout<<*max_element(dp.begin(), dp.end())<<'
';
    }
 
    
 
    return 0;
}