#include <bits/stdc++.h>
using namespace std;
         
int main() {
    int n;  
    cin >> n;
    cin.ignore(); 
         
    for (int i = 0; i < n; i++) {
        string texto;
        getline(cin, texto); 
         
        string solTexto = "*"; 
                
            for (int i = 0; i< texto.size(); i++) {
                if (texto[i] == ' ') {
                    solTexto += "**"; 
                } else {
                    solTexto += " ";  
                    solTexto += texto[i]; 
                    solTexto += " *";  
                }
            }
         
        string marco(solTexto.size(), '*');
         
        cout << marco << endl;
        cout << solTexto<< endl;
        cout << marco << endl;
    }
         
    return 0;
}