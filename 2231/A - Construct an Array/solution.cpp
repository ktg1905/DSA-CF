#include <bits/stdc++.h>
using namespace std;
 
void solution(int n, vector<int> &x){
    int y=1;
    while(x.size()!=n){
        if(y%3!=0){
            x.push_back(y);
        }
        y++;
    }
}
 
int main() {
	// your code goes here
	int t;
    cin>>t;
 
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> x;
        solution(n, x);
        for(int k=0; k<x.size(); k++){
            cout<<x[k]<<" ";
        }
    }
 
    return 0;
 
}