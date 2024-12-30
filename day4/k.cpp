#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
int main(){
    int n, m; 
    cin>>n>>m; 
    char arr[n][m];  
    Loop(i, n){
        Loop(j,m){
            cin>>arr[i][j]; 
        }
    }

    Loop(i, n){
        Loop(j,m){
            if(arr[i][j] == '*'){
                arr[i][j] = 'F'; 
            }else{
                int count = 0; 
                if (i > 0 && j > 0 && arr[i-1][j-1] == '*') count++; 
                if (i > 0 && arr[i-1][j] == '*') count++;           
                if (i > 0 && j < m-1 && arr[i-1][j+1] == '*') count++; 
                if (j > 0 && arr[i][j-1] == '*') count++;            
                if (j < m-1 && arr[i][j+1] == '*') count++;          
                if (i < n-1 && j > 0 && arr[i+1][j-1] == '*') count++; 
                if (i < n-1 && arr[i+1][j] == '*') count++;          
                if (i < n-1 && j < m-1 && arr[i+1][j+1] == '*') count++;

                if(count == 0){
                    arr[i][j] = ' '; 
                }else{
                    arr[i][j] = '0' + count; 
                }
            }
        }
    }

    Loop(i, n){
        Loop(j,m){
            cout>>arr[i][j]; 
        }
        cout<<endl; 
    }
}