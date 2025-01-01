#include <bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it = 0; it < x; it++)

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void quicksort(vector<int> &a, int l, int r) {
    if (r - l < 1) return; 
    int pivot = a[r]; 
    int i = l, j = l;        
    while (j <= r) {
        if (a[j] < pivot) {
            swap(a[i], a[j]);
            ++i;
        }
        ++j;
    }
    swap(a[i], a[r]);
    quicksort(a, l, i - 1);
    quicksort(a, i + 1, r);
}

int main() {
    int n; 
    cin >> n;

    vector<int> a(n);
    
    Loop(i, n) {
        cin >> a[i]; 
    }

    quicksort(a, 0, n - 1); 

    Loop(i, n) {
        cout << a[i] << " "; 
    }
    cout << endl;
}
