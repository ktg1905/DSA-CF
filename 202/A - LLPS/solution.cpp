#include<bits/stdc++.h>
using namespace std;
 
int main(){
    char c;
    vector<char> v;
    vector<int> ascii;
    while ((c=getchar())!='
'){
        v.push_back(c);
    }
    
 
    vector<char>::iterator it=v.begin();
    for (int i = 0; i < v.size(); i++)
    {
        ascii.push_back((int)(*(it)));
       
        it++;
    }
    auto max_it = max_element(ascii.begin(), ascii.end());
 
   
    int max_value = *max_it;
    int n=0;
    for (auto it=max_it; it != ascii.end(); it++)
    {
        if (*(it)==max_value){
           n++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        char c = max_value;
        cout<<c;
    }
    
 
    
 
    
    return 0;
}