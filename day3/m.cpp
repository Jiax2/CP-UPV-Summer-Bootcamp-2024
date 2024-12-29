    #include <bits/stdc++.h>
    using namespace std; 
     
    int main() {
        string s; 
        while (getline(cin, s)) {
            int n = s.size();
            if (n % 2 == 0) {
                cout << s << endl;
            } else {
                for (int i = n - 1; i >= 0; --i) {
                    cout << s[i];
                }
                cout << endl;
            }
        }
        return 0; 
    }