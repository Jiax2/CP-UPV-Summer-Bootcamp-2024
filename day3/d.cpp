    #include<bits/stdc++.h>
    using namespace std; 
    int main(){
        int n, p; 
        cin>>n>>p; 
        while(p--){
            int num; 
            cin>>num; 
            if(n== num){ cout<< "1p "; }
            else if(abs(n-num)<=5){
                cout<< "0.5p "; 
            }
            else if(abs(n-num)<=10){
                cout<<"0.25p "; 
            }else{
                cout<<"0p "; 
            }
        }
        return 0; 
    }