#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
//DEBUG #define d(x) cerr << #x << "=" << x <<endl 

int main(){
    //desincroniza el cin 
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<string> st; 
    int n; 
    cin>>n; 
    while(n--){
        string s; 
        cin>>s; 
        if(s == "Depositan"){
            string text; 
            getline(cin>> ws, text); 
            st.push(text); 
        }else if(s == "Retiran"){
            if(st.empty()){
                ; 
            }else{
                st.pop();
            } 
        }
    }
    if(st.empty()){
        cout<<"No quedan libros"<<endl; 
    }
    while(!st.empty()){
        cout<< st.top() <<endl; 
        st.pop(); 
    }
    return 0; 
}