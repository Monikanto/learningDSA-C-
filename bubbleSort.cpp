#include <iostream>
using namespace std;

int temp;
void BubbleSort(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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

    BubbleSort(arr, n);  // ✅ pass size here

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
