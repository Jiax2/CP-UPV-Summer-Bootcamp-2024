#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
//DEBUG #define d(x) cerr << #x << "=" << x <<endl 
void DFS(int row, int col, vector<vector<char>> &adj, vector<vector<bool>> &visit, int count, int wsize, int hsize){
    if(row>=hsize||row<0||col<0||col>=wsize||adj[row][col] == '#'||visit[row][col]){
        return; 
    }
    visit[row][col] = true; 
    if(adj[row][col] == 'S'){
        count++; 
        cout<<count<<endl; 
        return; 
    }else if(adj[row][col] == 'E'|| adj[row][col] == '.'){
        visit[row][col] = true; 
        count++; 
        DFS(row+1, col, adj, visit, count, wsize, hsize);
        DFS(row-1, col, adj, visit, count, wsize, hsize); 
        DFS(row, col+1, adj, visit, count, wsize, hsize);
        DFS(row, col-1, adj, visit, count, wsize, hsize);
    }
}
int main(){
    //desincroniza el cin 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int w, h; 
    cin>>w>>h; 
    int initR, initC; 
    vector<vector<bool>> visited(h, vector<bool>(w, false)); 
    vector<vector<char>> adj(h, vector<char>(w)); 
    Loop(i, h){
        Loop(j, w){
            cin>>adj[i][j]; 
            if(adj[i][j] == 'E'){
                initR = i; 
                initC = j;  
            }else if(adj[i][j] == '#'){
                visited[i][j] == true; 
            }
        }
    }
    DFS(initR, initC, adj, visited, 0, w, h); 
    return 0; 
}
