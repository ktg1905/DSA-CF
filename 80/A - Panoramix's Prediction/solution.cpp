#include<iostream>
using namespace std;
 
int isPrime(int a){
    
    for (int i = 2; i < a; i++)
    {
        if(a%i==0){
            return 0;
        }
    }
    return 1;
    
}
 
int main(){
 
    int n,m;
    cin>>n>>m;
 
    if(n==m){
        cout<<"NO";
    }
    else{
        if(isPrime(m)==0){
            cout<<"NO";
        }
        else{
            int flag=0;
            for (int i = n+1; i < m; i++)
            {
                if(isPrime(i)==1){
                    flag=1;
                    cout<<"NO";
                    break;
                }
            }
            if(flag==0){
                cout<<"YES";
            }
        }
    }
 
 
    return 0;
}