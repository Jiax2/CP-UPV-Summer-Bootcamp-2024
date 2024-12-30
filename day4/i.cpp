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
            if(i+1<n && j+1<m){
                if(arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i][j+1] 
                && arr[i][j] == arr[i+1][j+1]){
                    cout<<"NO ORIGINAL";
                    return 0;  
                }
            }else{continue; }
        }
    }
    cout<<"ORIGINAL"; 
}