#include<bits/stdc++.h>
using namespace std; 
#define Loop(it, x) for(int it= 0; it<x; it++)
//radix sort
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void countSort(int arr[], int n, int exp) {
    int output[n], count[10] = {0};

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int n) {
    int m = getMax(arr, n);

    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

int main() {
    int n;
    cin >> n;

    vector<int> pos, neg;

    Loop(i,n){
        int num;
        cin >> num;
        if (num >= 0)
            pos.push_back(num);
        else
            neg.push_back(-num);
    }

    if (!pos.empty())
        radixsort(pos.data(), pos.size());

    if (!neg.empty()) {
        radixsort(neg.data(), neg.size());
        reverse(neg.begin(), neg.end());
    }

    Loop(i, neg.size()){
        cout << -neg[i] << " ";
    }

    Loop(i, pos.size()){
        cout << pos[i] << " ";
    }

    cout << endl;

}
