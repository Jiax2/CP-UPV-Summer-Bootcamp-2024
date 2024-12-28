    #include<bits/stdc++.h>
    using namespace std; 
    int main(){
        string line; 
        getline(cin,line); 
        stringstream ss(line); 
     
        vector<int> v; 
        int num; 
        while(ss>>num){
            v.push_back(num); 
        }
        
        for(auto i= 1; i<v.size(); ++i){
            if(v[i]>v[i-1]){
                cout<<"S"; 
            }else if(v[i]<v[i-1]){
                cout<<"B"; 
            }else{
                cout<<"I"; 
            }
        }
        return 0; 
    }

