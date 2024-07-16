#include <iostream>
using namespace std;

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {2, 3, 1, 1000, 5};
    int n = 5;
    int arr2[n];

    // Manual copy of array
    for (int i = 0; i < n; i++) {
        arr2[i] = arr[i];
    }

    sort(arr2, n);

    cout << "This is my original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "This is my duplicate (sorted) array: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
