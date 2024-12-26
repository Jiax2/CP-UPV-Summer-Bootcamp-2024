#include<bits/stdc++.h>
using namespace std; 
int main(){
    double pi= 3.141592; 
    int n;
    cin>>n;
    while(n--){
        int f; 
        cin>>f; 
        if(f==1){
            double r; 
            cin>>r; 
                cout<<fixed<<setprecision(5)<<pi*(r*r)<<endl; 
            }
            else if(f==2){
                double x; 
                cin>>x; 
                cout<<fixed<<setprecision(5)<<x*x<<endl; 
            }
            else if(f==3){
                double x, y; 
                cin>>x>>y; 
                cout<<fixed<<setprecision(5)<< x*y<<endl; 
            }
            else{
                double b, a; 
                cin>>b>>a; 
                cout<<fixed<<setprecision(5)<<(b*a)/2<<endl; 
            }
        }
    return 0; 
}