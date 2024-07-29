#include<bits/stdc++.h>
using namespace std; 
int main(){
    signed long long a, b, c; 
    cin>>a>>b>>c; 
    signed long long x = a&b; 
    signed long long y = x|c; 
    signed long long z = y^b; 
    cout<<x<<" "<<y<<" "<<z<<endl; 
    return 0; 
}