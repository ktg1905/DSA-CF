#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    
	    int n;
	    cin>>n;
	    vector<int> a;
	    for(int k=0; k<n; k++){
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
	    
	    int minm=INT_MAX;
	    int maxm=-1;
	    for(int k=0; k<n; k++){
	        minm=min(minm, a[k]);
	        maxm=max(maxm, a[k]);
	    }
	    cout<<maxm-minm+1<<endl;
	}
 
}