    #include<bits/stdc++.h>
    using namespace std; 
    int main(){
        int n; 
        cin>>n; 
        int num, min, max; 
        cin>>num; 
        min = num; 
        max = num; 
        while(n--){
            cin>>num; 
            if(num<min){
                min = num; 
            }
            if(num>max){ max = num; }
        }
        cout<<min<<" "<<max<<endl;
    }

