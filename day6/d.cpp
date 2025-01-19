#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
void printn(int num){
    if(num == 0) return; 
    cout<<"#"; 
    printn(num-1);  
}
void printdown(int num){
    if(num==0) return; 
    printn(num);  
    cout<<endl; 
    printdown(num-1);
}
void printup(int num, int max){
    if(num > max) return; 
    printn(num); 
    cout<<endl; 
    printup(num+1, max); 
}
int main(){
    int n; 
    cin>>n;
    printup(1,n);
    printdown(n-1);  
    return 0; 
}