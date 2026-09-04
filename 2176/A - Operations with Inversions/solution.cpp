#include<iostream>
using namespace std;
 
int maxop(int *arr, int n){
    int max=arr[0];
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<max){
            ans++;
        }
        else{
            max=arr[i];
        }
    }
    return ans;
    
}
int main(){
    int t;
    cin>>t;
    int *answer=new int [t];
    int length=0;
    for(int k=0; k<t; k++){
        int n;
        cin>>n;
 
        int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    answer[length++]=maxop(arr,n);
    delete []arr;
    
}
    for (int i = 0; i < t; i++)
    {
        cout<<answer[i]<<endl;
    }
    delete []answer;
    
    
    
    
    return 0;
}