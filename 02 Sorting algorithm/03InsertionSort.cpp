#include<iostream>
using namespace std;

// Time complexity : O(n) for best case.
//                   O(n^2) for worst and avg cases.

void InsertionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main() {
    int n = 6;
    int arr[n] = {6, 3, 2, 9, 12, 10};
    InsertionSort(arr, n);
    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }
    return 0;
}