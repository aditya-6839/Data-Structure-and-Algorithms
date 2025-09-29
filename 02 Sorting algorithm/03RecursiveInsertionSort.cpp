#include<iostream>
using namespace std;

// Time complexity : O(n) for best case.
//                   O(n^2) for worst and avg cases.

void RecursiveInsertionSort(int arr[],int i, int n) {
    if(n== i) return;
    int j = i;
    while(j > 0 && arr[j-1] > arr[j]) {
        swap(arr[j-1], arr[j]);
        j--;
    }
    RecursiveInsertionSort(arr, i+1, n);
}

int main() {
    int n = 6;
    int arr[n] = {6, 3, 2, 9, 12, 10};
    RecursiveInsertionSort(arr, 0, n);
    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }
    return 0;
}