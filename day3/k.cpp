    #include<bits/stdc++.h>
    using namespace std; 
    int main(){
        int t; 
        cin>>t; 
        bool fav; 
        while(t--){
            int n, c; 
            string next; 
            cin>>n>>c; 
            while(n--){
                int b; 
                cin>>b; 
                if(b==c){ fav = true;  getline(cin, next); break; }
                else{ fav = false; }
            } 
            if(fav == true){ cout<<"YES"<<endl; }
            else{ cout<<"NO"<<endl; } 
        }
        return 0; 
    }