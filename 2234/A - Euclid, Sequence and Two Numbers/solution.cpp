#include <bits/stdc++.h>
using namespace std;
 
void solution(vector<int> &seq){
    
    int n = seq.size();
    
    if(n<=1){
        cout<<-1<<endl;
        return;
    }
    if(n==2){
        cout<<max(seq[0], seq[1])<<" "<<min(seq[0], seq[1])<<endl;
        return;
    }
    int flag=0;
    sort(seq.begin(), seq.end(), greater<int>());
    for(int i=2; i<n; i++){
        if(seq[i-2]%seq[i-1] != seq[i]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<seq[0]<<" "<<seq[1]<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return;
}
 
 
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	for(int k=0; k<t; k++){
	    int n;
	    cin>>n;
	    
	    vector<int> seq;
	    for(int i=0; i<n; i++){
	        int h;
	        cin>>h;
	        seq.push_back(h);
	    }
	    
	    solution(seq);
	}
 
}