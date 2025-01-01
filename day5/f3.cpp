#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)

//selection sort
void selectionSort(int arr[], int size) {
    int min_idx;
    for (int i = 0; i < size - 1; i++) {
        min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) min_idx = j;
        }
        if (min_idx != i) swap(arr[min_idx], arr[i]);
    }
}

int main(){
    int n; 
    cin>>n; 
    int arr[n]; 
    Loop(i, n){
        cin>>arr[i]; 
    }

    //selection sort;
    selectionSort(arr, n); 

    Loop(i, n){
        cout << arr[i] << " "; 
    } 
}

