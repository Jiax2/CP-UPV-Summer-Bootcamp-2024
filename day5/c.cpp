#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
string bs(int arr[], int low, int high, int x){
    if(high>=low){
        int mid= low+(high-low)/2; 
        //medio
        if(arr[mid] == x) return "YES";
        //menor 
        if(arr[mid]>x) return bs(arr, low, mid-1, x); 
        //mayor
        return bs(arr, mid+1, high, x); 
    }
    return "NO"; 
}

string bs(int arr[], int size, int x){
    return bs(arr, 0, size-1, x); 
}

int main(){
    int n; 
    cin>>n; 
    int arr[n]; 
    Loop(i, n){
        cin>>arr[i]; 
    }
    sort(arr, arr+n); 
    int q; 
    cin>>q; 
    while(q--){
        int num; 
        cin>>num;  
        cout<<bs(arr, n, num)<<endl; 
    }
}

//other way 

#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)

int bs(int arr[], int low, int high, int x){
    if(high>=low){
        int mid= low+(high-low)/2; 
        //medio
        if(arr[mid] == x) return mid; 
        //menor 
        if(arr[mid]>x) return bs(arr, low, mid-1, x); 
        //mayor
        return bs(arr, mid+1, high, x); 
    }
    return -1; 
}

int bs(int arr[], int size, int x){
    return bs(arr, 0, size -1, x); 
}

int main(){
    int n; 
    cin>>n; 
    int arr[n]; 
    Loop(i, n){
        cin>>arr[i]; 
    }
    sort(arr, arr+n); 
    int q; 
    cin>>q; 
    while(q--){
        int num; 
        cin>>num; 
        if(bs(arr, n, num)>0) cout<< "YES"<<endl; 
        else cout<< "NO"<<endl; 
    }
}



