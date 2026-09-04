#include <bits/stdc++.h>
using namespace std;
 
long long solution(long long n, long long a, long long b){
    long long x = min(3*a, b);
    if(n%3==0){
        return x*(n/3);
    }
    else if(n%3==1){
        return (a>b ? x*(n/3)+b : x*(n/3)+a);
    }
    else{
        return (2*a>b ? x*(n/3)+b : x*(n/3)+2*a);
    }
}
 
int main() {
	// your code goes here
	int t;
    cin>>t;
 
    for(int i=0; i<t; i++){
        long long n;
        long long a;
        long long b;
        cin>>n>>a>>b;
 
        cout<<solution(n,a,b)<<endl;
 
    }
 
    return 0;
 
}