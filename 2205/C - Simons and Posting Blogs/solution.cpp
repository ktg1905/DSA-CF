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
 
        vector<vector<int>> mat;
        for(int i=0; i<n; i++){
            int l;
            cin>>l;
            vector<int> temp;
            for(int j=0; j<l; j++){
                int x;
                cin>>x;
                temp.push_back(x);
            }
 
            unordered_set<int> st;
            for(int j=temp.size()-1; j>=0; j--){
                if(st.find(temp[j])!=st.end()){
                    temp.erase(temp.begin()+j);
                }
                else{
                    st.insert(temp[j]);
                }
            }
            reverse(temp.begin(), temp.end());
 
            mat.push_back(temp);
        }
 
        vector<int> Q;
        unordered_set<int> seen;
 
        while(mat.size()!=0){
 
            vector<int> best = mat[0];
            int idx=0;
            for(int i=1; i<mat.size(); i++){
                if(best > mat[i]){
                    best = mat[i];
                    idx = i;
                }
            }
 
            for(int i=0; i<best.size(); i++){
                if(seen.find(best[i])==seen.end()){
                    Q.push_back(best[i]);
                    seen.insert(best[i]);
                }
            }
 
            for(int i=0; i < mat.size(); i++){
                if(i!=idx){
                    for(int j=mat[i].size()-1; j>=0; j--){
                        if(seen.find(mat[i][j])!=seen.end()){
                            mat[i].erase(mat[i].begin()+j);
                        }
                    }
                }
            }
            mat.erase(mat.begin()+idx);
            for(int i=(int)mat.size()-1; i>=0 ; i--){
                if(mat[i].size()==0){
                    mat.erase(mat.begin()+i);
                }
            }
            seen.clear();
        }
 
        for(int i=0; i<Q.size(); i++){
            cout<<Q[i]<<" ";
        }
        cout<<'
';
 
    }
 
    
 
    return 0;
}