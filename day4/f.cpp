#include<bits/stdc++.h>
using namespace std; 
int main(){
    int L; 
    string nothing; 
    getline(cin, L);
    getline(cin,nothing); 
    cin.ignore(); 
    char[L][L] array;
    char aux;  
    bool no = true; 
    for(int i: L){
        for(int j: L){
            cin>>aux; 
            array[i][j] = aux;
            if(array[i][j] == "#"){
                no = false;  
            } 
        }
    }
    if(!no){ cout << "NO LLEVABA MERMELADA"; }
    else{
        getline(nothing); 
        cin.ignore(); 
        char otro; 
        for(int i: L){
            for(int j: L){
                cin>>otro; 
                if(otro != array[i][j]){
                    cout<< "TRAGEDIA"; 
                    break; 
                }         
            }
        }  
        cout<< "HA HABIDO SUERTE"; 
    }
    
}