#include<bits/stdc++.h>
//#include<omp.h>
using namespace std; 
int main(){
    int n, m; 
    cin>>n>>m; 
    int arr[n][m]; 
    int aux;
    int maximo = 0, suma; 
    //double start = omp_get_wtime();
    for(int i = 0; i< n; i++){
        suma = 0; 
        for(int j= 0; j<m ; j++){
            cin>>aux; 
            arr[i][j] = aux; 
            suma += aux; 
        }
        if(suma>maximo){ maximo = suma; }
    }
    for(int i = 0; i< m; i++){
         suma = 0; 
        for(int j = 0; j< n; j++){
            suma += arr[j][i]; 
        }
        if (suma > maximo){ maximo = suma; }
    }
    //double end = omp_get_wtime(); 
    cout << maximo;
    //cout<< "Tiempo ejec: "<< (end - start); 
}