#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)

void coutdown(int n){
    if(n==1){
        cout<< 1; 
    }else{
        cout<<n<<endl; 
        coutdown(n-1); 
    }
}
int main(){
    int n; 
    cin>>n; 
    coutdown(n); 
    return 0; 
}