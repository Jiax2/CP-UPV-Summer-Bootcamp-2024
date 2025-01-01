#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)

//insertion sort
void insertionSort(int arr[], int size){
    int key;
    int n = size;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main(){
    int n; 
    cin>>n; 
    int arr[n]; 
    Loop(i, n){
        cin>>arr[i]; 
    }

    //insertion sort ;
    insertionSort(arr, n); 

    Loop(i, n){
        cout << arr[i] << " "; 
    } 
}
