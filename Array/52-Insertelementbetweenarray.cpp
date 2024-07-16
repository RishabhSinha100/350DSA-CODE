#include <iostream>
#include <vector>
using namespace std;



void insertAndShift(std::vector<int>& arr, int position, int value) {
    // Increase the size of the array by adding a dummy element at the end
    arr.push_back(0);

    // Shift elements to the right from the end to the position
    for (int i = arr.size() - 1; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = value;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 7, 8};
    int position = 4;  // Position where we want to insert the new element
    int value = 6;     // New element to be inserted

    insertAndShift(arr, position, value);

    // Print the updated array
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << std::endl;

    return 0;
}
