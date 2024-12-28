#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    cin>>n;
    char board[8][8];  
    while(n--){
        char casilla; 
        for(int i = 0; i<8; i++){
            for(int j = 0; j<8; j++){
                cin>>casilla; 
                if(i%2== 0 && j%2 == 0){
                    if(casilla == 'W'){
                        board[i][j] = casilla; 
                    }else{ board[i][j] = 'X'; }
                }else{
                    if(casilla == 'B'){
                        board[i][j] = casilla; 
                    }else{ board[i][j] = 'X'; }
                }
                else if(i%2== 0 && j%2 != 0){
                    if(casilla == 'B'){
                        board[i][j] = casilla; 
                    }else{ board[i][j] = 'X'; }
                }else{
                    if(casilla == 'W'){
                        board[i][j] = casilla; 
                    }else{ board[i][j] = 'X'; }
                }
                else if(i%2!= 0 && j%2 == 0){
                    if(casilla == 'B'){
                        board[i][j] = casilla; 
                    }else{ board[i][j] = 'X'; }
                }else{
                    if(casilla == 'W'){
                        board[i][j] = casilla; 
                    }else{ board[i][j] = 'X'; }
                }
                else if(i%2!= 0 && j%2 != 0){
                    if(casilla == 'W'){
                        board[i][j] = casilla; 
                    }else{ board[i][j] = 'X'; }
                }else{
                    if(casilla == 'B'){
                        board[i][j] = casilla; 
                    }else{ board[i][j] = 'X'; }
                }
            }
        }
        for(int i = 0; i<8; i++){
            for(int j = 0; j<8; j++){
                cout<< board[i][j]; 
            }
            cout<<endl; 
        }
    }
}