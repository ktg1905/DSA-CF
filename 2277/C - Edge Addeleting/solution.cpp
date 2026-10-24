#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin>>n>>m;
 
        vector<vector<int>> adj1(n+1);
 
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj1[u].push_back(v);
            adj1[v].push_back(u);
        }
 
        vector<int> query(m);
        for (int i=0; i<m; i++) {
            cin>>query[i];
        }
 
        vector<int> dist(n+1,-1);
        queue<int> q1;
        q1.push(n);
        dist[n] = 0;
 
        while (!q1.empty()) {
            int u = q1.front();
            q1.pop();
 
            for (int v : adj1[u]) {
                if (dist[v]==-1) {
                    dist[v]=dist[u]+1;
                    q1.push(v);
                }
            }
        }
 
        vector<int> comp(n+1, -1);
        int id=0;
 
        for (int child : adj1[1]) {
            stack<int> st;
            st.push(child);
            comp[child] = id;
 
            while (!st.empty()) {
                int u = st.top();
                st.pop();
 
                for (int v : adj1[u]) {
                    if (v != 1 && comp[v]==-1) {
                        comp[v] = id;
                        st.push(v);
                    }
                }
            }
 
            id++;
        }
 
        int ans1 = dist[1];
 
        for (int v : query) {
            if (comp[v] == comp[n]) {
                ans1 = max(ans1, dist[v] + 1);
            }
        }
 
        cout <<ans1<<'
';
    }
 
    return 0;
}