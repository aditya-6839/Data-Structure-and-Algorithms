#include<iostream>
using namespace std;

// Time complexity : O(nlogn) for best case.
//                   O(n^2) for worst and avg cases.
int Quick(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j) {
        while(arr[i] <= pivot && i <= high) i++;
        while(arr[j] > pivot && j >= low) j--;
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void QuickSort(int arr[], int low, int high) {
    if(low<high) {
        int PI = Quick(arr, low, high);
        QuickSort(arr, low, PI-1);
        QuickSort(arr, PI+1, high);
    }
}

int main() {
    int n = 6;
    int arr[n] = {6, 3, 2, 9, 12, 10};
    int low = 0;
    int high = n-1;
    QuickSort(arr, low, high);
    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }
    return 0;
}