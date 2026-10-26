#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int> sp(k+1, 1);
        vector<int> sz(k+1, 1);
        for(int i=1; i<=k; i++){
            int n;
            cin>>n;
            sz[i] = n;
            vector<int> deg(n+1, 0);
            vector<pair<int,int>> edge(n>0 ? n-1 : 0);
            for(auto &e : edge){
                cin>>e.first>>e.second;
                deg[e.first]++;
                deg[e.second]++;
            }
            if(n==1){
                sp[i]=1;
                continue;
            }
            int leafs = -1;
            for(int v = 1; v <= n; v++){
                if(deg[v] == 1){
                    leafs = v;
                    break;
                }
            }
            for(auto &e : edge){
                if(e.first == leafs){
                    sp[i] = e.second;
                    break;
                }
                if(e.second == leafs){
                    sp[i] = e.first;
                    break;
                }
            }
        }
        int roots = 1;
        for(int i=1; i<=k; i++){
            if(sz[i]>=2){
                roots = i;
                break;
            }
        }
        for(int i=1; i<=k; i++){
            if(i==roots) continue;
            cout<<i<<" "<<sp[i]<<" "<<roots<<" "<<sp[roots]<<"
";
        }
    }
 
    return 0;
}