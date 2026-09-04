#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t){
	    
	    int n;
	    int c;
	    cin>>n>>c;
	    
	    vector<int> a;
	    vector<int> b;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin>>x;
	        a.push_back(x);
	    }
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin>>x;
	        b.push_back(x);
	    }
	    
	    int flag=0;
	    
	    int sum=0;
	    for(int i=0; i<n; i++){
	        if(a[i]-b[i]<0){
	            flag=1;
	            break;
	        }
	        else{
	            sum+=a[i]-b[i];
	        }
	    }
	    
	    
	        
    	 sort(a.begin(), a.end());
    	 sort(b.begin(), b.end());
	    
	    
	    
	    int sum1=0;
	    for(int i=0; i<n; i++){
	        if(a[i]-b[i]<0){
	            flag=-1;
	            cout<<-1<<endl;
	            break;
	        }
	        else{
	            sum1+=a[i]-b[i];
	        }
	    }
	    
	    if(flag==0){
	        cout<<min(sum, sum1+c)<<endl;
	    }
	    else if(flag==1){
	        cout<<sum1+c<<endl;
	    }
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    t--;
	}
 
}