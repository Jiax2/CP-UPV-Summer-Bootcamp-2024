#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)

int main(){
    int n; 
    cin>>n; 
    pair<int,string> cafe[n];
    Loop(i, n){
        int num; 
        string s; 
        cin>>num>>s; 
        cafe[i] = make_pair(num, s); 
    }
    sort(cafe, cafe +n, [](auto &a, auto &b){
        if(a.first == b.first){ 
            return a.second < b.second; 
        }
        return a.first < b.first; 
    }); 

    Loop(i, n){
        cout<< cafe[i].first << " "<< cafe[i].second<< endl; 
    }
}