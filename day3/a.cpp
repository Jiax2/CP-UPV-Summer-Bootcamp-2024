#include<bits/stdc++.h>
using namespace std; 
int main(){
    string tiempo; 
    int temp; 
    getline(cin,tiempo); 
    cin>>temp; 
    cout<<"Vienen a pasear: "; 
    if(tiempo=="Soleado"&&temp>=20){
        cout<< "Adrian "; 
    }
    if(tiempo== "Soleado"||temp>15){
        cout<< "Barbara "; 
    }
    if(tiempo== "Soleado"||tiempo=="Nublado"){
        cout<< "Carmen "; 
    }
    if(tiempo!="Tormenta"){
        cout<<"Dario"<<endl; 
    }
    return 0; 
}
