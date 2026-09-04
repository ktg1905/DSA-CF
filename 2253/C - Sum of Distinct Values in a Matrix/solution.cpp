#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
 
        set<int> a;
        set<int> b;
        for(int i=0; i<x; i++){
            int k;
            cin>>k;
            a.insert(k);
        }
        for(int i=0; i<y; i++){
            int k;
            cin>>k;
            b.insert(k);
        }
 
        set<int> c;
        set<int> d;
        set<int> e;
 
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(c, c.begin()));
        set_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(d, d.begin()));
        set_difference(b.begin(), b.end(), a.begin(), a.end(), inserter(e, e.begin()));
 
        set<int, greater<int>> final;
 
        auto it = d.rbegin();
        for(int i=0; i<min(n, (int)d.size()); i++){
            final.insert(*it);
            it++;
        }
        auto it1 = e.rbegin();
        for(int i=0; i<min(m, (int)e.size()); i++){
            final.insert(*it1);
            it1++;
        }
        for(auto it: c){
            final.insert(it);
        }
 
        auto it2 = final.begin();
        ll sum=0;
        for(int i=0; i<min(n+m-1, (int)final.size()); i++){
            sum+=*it2;
            it2++;
        }
 
        cout<<sum<<'
';
 
    }
 
    
 
    return 0;
}