#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
int triangulo(int n){
    if(n<=1){
        return n; 
    }
    return n + triangulo(n-1); 
}
int main(){
    int n; 
    cin>>n; 
    cout<<triangulo(n); 
    return 0; 
}