#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)

void pigeonholeSort(int* arr, int n) {
    if (n <= 0) return;
 
    int minValue = *min_element(arr, arr + n);
    int maxValue = *max_element(arr, arr + n);
 
    int range = maxValue - minValue + 1;
 
    vector<int> holes(range, 0);
 
    for (int i = 0; i < n; i++) {
        holes[arr[i] - minValue]++;
    }
 
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (holes[i] > 0) {
            arr[index++] = i + minValue;
            holes[i]--;
        }
    }
}
 
int main() {
    int n;
    cin >> n;
    vector<int> lista(n);
 
    for (int i = 0; i < n; i++) {
        cin >> lista[i];
    }

    pigeonholeSort(lista.data(), n);
 
    Loop(i, n){
        cout << lista[i] << " ";
    }
    cout << endl;
 
}
