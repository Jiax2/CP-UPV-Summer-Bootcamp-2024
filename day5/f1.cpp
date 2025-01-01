#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
//bubble sort 
void bubbleSort(int arr[], int n) { 
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]); 
            }
        }
    }
} 

int main(){
    int n; 
    cin>>n; 
    int arr[n]; 
    Loop(i, n){
        cin>>arr[i]; 
    }

    //bubbleSort(arr, n);
    insertionSort(arr); 

    Loop(i, n){
        cout << arr[i] << " "; 
    } 
}
