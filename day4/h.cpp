    #include<bits/stdc++.h>
    using namespace std; 
    int main(){
        int n, m; 
        cin>>n>>m; 
        int arr[n][m]; 
        int aux;
        int maxfil = 0, maxcol = 0; 
        for(int i = 0; i< n; i++){
            int suma = 0; 
            for(int j= 0; j<m ; j++){
                cin>>aux; 
                arr[i][j] = aux; 
                suma += aux; 
            }
            if(suma>maxfil){ maxfil = suma; }
        }
        for(int i = 0; i< m; i++){
            int suma = 0; 
            for(int j = 0; j< n; j++){
                suma += arr[j][i]; 
            }
            if (suma > maxcol){ maxcol = suma; }
        }
     
        cout << max(maxfil, maxcol); 
    }

