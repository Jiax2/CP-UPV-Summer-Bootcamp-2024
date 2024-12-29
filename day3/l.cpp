    #include<bits/stdc++.h>
    using namespace std;
     
    int main() {
        int P,V; 
        cin>>P>>V;
        int luz = 0;
        for (int i = 0; i < P; i++) {
            for (int j = 0; j < V; j++) {
                char v1, v2;
                cin >> v1 >> v2;
                if(v1 == '#' || v2 == '#'){
                    luz++; 
                }
            }
        }
        cout << luz << endl;
     
        return 0;
    }