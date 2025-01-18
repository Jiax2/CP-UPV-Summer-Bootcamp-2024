#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
int fibonacci(int n){
    if(n<=1){
        return n; 
    }
    return fibonacci(n-1) + fibonacci(n-2); 
}
int main(){
    int n; 
    cin>>n; 
    cout<<fibonacci(n);
    return 0; 
}