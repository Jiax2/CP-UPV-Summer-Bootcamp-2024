#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
//DEBUG #define d(x) cerr << #x << "=" << x <<endl
//not working
int minF(vector<int> &fila, int idx = 0, int minIdx = 0) {
    if (idx == fila.size()) {
        return minIdx;
    }
    if (fila[idx] < fila[minIdx]) {
        minIdx = idx;
    }
    return minF(fila, idx + 1, minIdx);
}
int maxC(vector<vector<int>> &matriz, int columna, int filAc = 0, int maxIdx = 0) {
    if (filAc == matriz.size()) {
        return maxIdx;
    }
    if (matriz[filAc][columna] > matriz[maxIdx][columna]) {
        maxIdx = filAc;
    }
    return maxC(matriz, columna, filAc + 1, maxIdx);
}

pair<int, int> check(vector<vector<int>> &matriz, int fila, int columna){
    int minFil = minF(matriz[fila]);
    int maxCol = maxC(matriz, minFil);
    
    if (fila == maxCol && columna == minFil) {
        return {fila, columna};
    }
    
    pair<int, int> derecha = {-1, -1}, abajo = {-1, -1};
    if (columna + 1 < matriz[0].size()) {
        derecha = check(matriz, fila, columna + 1);
    }
    if (fila + 1 < matriz.size()) {
        abajo = check(matriz, fila + 1, columna);
    }
    
    if (derecha.first != -1) return derecha;
    return abajo;
}
int main(){
    //desincroniza el cin 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin>>t; 
    while(t--){
        int m,n; 
        cin>>n>>m; 
        vector<vector<int>> vec(n, vector<int>(m));
        Loop(i, n){
            Loop(j,m){
                cin >> vec[i][j];
            }
        }
        
        pair<int, int> resultado = check(vec, 0, 0);
        cout << resultado.first << " " << resultado.second << "\n";
    } 
    return 0; 
}
