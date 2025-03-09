#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
//DEBUG #define d(x) cerr << #x << "=" << x <<endl 

int main(){
    //desincroniza el cin 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin>>t; 
    while(t--){
        int n, m; 
        cin>>n>>m; 
        vector<vector<int>> vec(n, vector<int>(m)); 
        vector<int> minfil(n, INT_MAX), maxcol(m, INT_MIN); 
        Loop(i, n){
            Loop(j,m){
                cin >> vec[i][j];
                if(vec[i][j]< minfil[i]){
                    minfil[i]  = vec[i][j]; 
                }
            }
        }
        Loop(j, m) {
            Loop(i, n) {
                if (vec[i][j] > maxcol[j]) {
                    maxcol[j] = vec[i][j];
                }
            }
        }
        bool encontrado = false;
        Loop(i, n) {
            Loop(j, m) {
                if (vec[i][j] == minfil[i] && vec[i][j] == maxcol[j]) {
                    cout << i << " " << j << endl;
                    encontrado = true;
                    break;
                }
            }
            if (encontrado) {break;}
        }
        if (!encontrado) {
            cout << -1 <<" "<< -1<<endl; 
        }
    } 
    return 0; 
}