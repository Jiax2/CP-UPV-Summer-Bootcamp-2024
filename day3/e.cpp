    #include<bits/stdc++.h>
    using namespace std; 
    int suma(int num){
        int aux = 0; 
        if(num<10){
            aux += num; 
            return aux; 
        }else{
            return num%10 + suma(num/10); 
        }
    }
    int main(){
        int num; 
        cin>>num;
        num = suma(num); 
        cout<< num; 
        return 0; 
    }

