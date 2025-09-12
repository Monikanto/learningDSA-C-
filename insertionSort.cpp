#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]= arr[j];
            arr[j]= temp ;
            j--;
        }
    }
}

int main() {
    int arr[] = {23, 34, 54, 76, 12 , 1};
    int n = sizeof(arr) / sizeof(arr[0]);  // ✅ size of array

    cout << "Original array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    insertionSort(arr, n);  // ✅ pass size here

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
