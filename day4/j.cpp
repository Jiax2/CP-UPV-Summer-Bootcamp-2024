#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
int main(){
    int t;
    cin>>t; 
    while(t--){
        double m, n, e; 
        cin>>m>>n>>e; 
        double arr[m][n]; 
        double num; 
        Loop(i, m){
            Loop(j, n){
                cin>>num; 
                if(num<= e){
                    arr[i][j] = 0; 
                }else{
                    arr[i][j] = num; 
                }
            }
        }
        Loop(i,m){
            Loop(j,n){
                cout<< arr[i][j]; 
            }
        }
    }
}