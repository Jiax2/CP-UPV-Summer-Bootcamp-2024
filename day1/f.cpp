#include<bits/stdc++.h>
using namespace std; 
int main(){
    double num; 
    string ign, l2, l3; 
    cin>>num; 
    getline(cin, ign);
    getline(cin, l2); 
    cin>>l3; 
    getline(cin, ign); 
    cout<<l2<<": "<<fixed<<setprecision(3)<< num <<endl;
    cout<<l3;  
    return 0; 
}
