#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
int main(){
    int n; 
    cin>>n; 
    long long a[n]; 
    sort(a, a+n); 
    long long minimo = LLONG_MAX; 
    for(int i = 1; i <n; i++){
        minimo = min(minimo, a[i] - a[i-1]); 
    }
    cout<<minimo; 
}