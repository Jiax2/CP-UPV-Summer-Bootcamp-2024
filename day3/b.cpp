    #include<bits/stdc++.h>
    using namespace std; 
     
    int main() {
        int num1, num2;
        char op; 
        cin >> num1 >> op >> num2; 
        
        switch(op) {
            case '+':
                cout << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 * num2 << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "ERROR" << endl;
                } else {
                    cout << fixed << setprecision(2) << static_cast<double>(num1) / num2 << endl;
                }
                break;
            default:
                cout << "ERROR" << endl;
        }
        
        return 0; 
    }