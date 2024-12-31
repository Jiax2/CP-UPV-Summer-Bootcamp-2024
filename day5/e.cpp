#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)

int main(){
    int n; 
    cin>>n; 
    pair<int,int> lista[n]; 
    Loop(i, n){
        int s, p; 
        cin>>s>>p; 
        lista[i] = make_pair(s, p); 
    }
    sort(lista, lista+n, [](auto &a, auto &b){
        if(a.first == b.first){
            return a.second > b.second: 
        }
        return a.first < b.first; 
    });

    for(int i= n-1; i>=0; i--){
        cout<<lista[i].first << " "<< lista[i].second; 
        cout<<endl; 
    }
}

sort(lista, lista + 3, [](auto &a, auto &b){
    return a.second < b,second; 
}); 