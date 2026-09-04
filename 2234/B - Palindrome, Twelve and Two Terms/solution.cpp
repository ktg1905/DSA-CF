#include <bits/stdc++.h>
using namespace std;
 
bool is_palindrome(long long x){
    vector<int> a;
    
    while(x!=0){
        a.push_back(x%10);
        x = (x-x%10)/10;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i]!=a[a.size()-i-1]){
            return false;
        }
    }
    return true;
}
 
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	for(int k=0; k<t; k++){
	    long long n;
	    cin>>n;
	    int flag=0;
	    for(long long i=0; i<=n/2; i++){
	        if((is_palindrome(i)) && ((n-i)%12==0)){
	            cout<<i<<" "<<n-i<<endl;
	            flag=1;
	            break;
	        }
	        else if((is_palindrome(n-i)) && ((i)%12==0)){
	            cout<<n-i<<" "<<i<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<-1<<endl;
	    }
	    
	}
 
}