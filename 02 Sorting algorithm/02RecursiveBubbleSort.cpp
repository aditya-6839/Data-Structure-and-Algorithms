#include<iostream>
using namespace std;

// Time complexity : O(N) for best case.
//                   O(N^2) for worst and avg cases.

void RecursiveBubbleSort(int arr[], int n) {
    if(n==1) return;
    int didswap = 0;
    for(int i=0; i<n-2; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
            didswap = 1;
        }
    }

    if(didswap == 0) return;

    RecursiveBubbleSort(arr, n-1);
}

int main() {
    int n = 6;
    int arr[n] = {6, 3, 2, 9, 12, 10};
    RecursiveBubbleSort(arr, n);
    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }
    return 0;
}