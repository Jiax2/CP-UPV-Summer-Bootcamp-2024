#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n, m; 
    cin>>n>>m; 
    int arr[n][m]; 
    int maximo = 0; 
    double start = omp_get_wtime(); 

    for(int i = 0; i< n; i++){
        int suma = 0; 
        for(int j= 0; j<m ; j++){
            cin>>arr[i][j]; 
            suma += arr[i][j]; 
        }
        if(suma>maximo){ maximo = suma; }
    }
    for(int i = 0; i< m; i++){
        int suma = 0; 
        for(int j = 0; j< n; j++){
            suma += arr[j][i]; 
        }
        if (suma > maximo){ maximo = suma; }
    }

    double end = omp_get_wtime(); 
    cout << maximo; 
    cout<< "Tiempo ejec: "<< (end - start); 
}