#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
//DEBUG #define d(x) cerr << #x << "=" << x <<endl 
void DFS(int row,int col, vector<vector<char>> &adj, vector<vector<bool>> &visited, int count, int s){
    
    //H: limits 
    if(row<0 || row>= s || col <0 ||col>=s || visited[row][col]){
        return; 
    }
    
    visited[row][col] = true; 
    
    if(adj[row][col] == 'C'){
        cout<<count;
        return; 
    }else{
        if(adj[row][col] == '0'|| adj[row][col]== 'R'){
            DFS(row+1, col, adj, visited, count +1, s);
            DFS(row, col+1, adj, visited, count +1, s); 
            DFS(row, col-1, adj, visited, count+1, s); 
            DFS(row-1, col, adj, visited, count +1, s);
        }
    }
}
int main(){
    //desincronizar cin
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; 
    cin>>n; 
    
    vector<vector<char>> vect(n, vector<char>(n)); 
    vector<vector<bool>> visit(n, vector<bool>(n,false)); 
    int initR = 0, initC = 0; 
    Loop(i, n){
        Loop(j, n){
            cin>>vect[i][j];
            if(vect[i][j] == 'R'){
                initR = i; 
                initC = j; 
            }
            if(vect[i][j] == '.'){
                visit[i][j] = true; 
            }
        }
    }
    
    DFS(initR, initC, vect, visit, 0, n); 
    return 0; 
}
