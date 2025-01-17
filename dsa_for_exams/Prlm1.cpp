#include<iostream>
using namespace std;

int main() {
    int arr[10] = {2, 7, 8, 3, 0, 1}; // Array with 6 initialized elements

    // Delete the element at the 3rd position (index 2)
    for (int i = 2; i < 5; i++) { // Shift elements from index 2 to 5
        arr[i] = arr[i + 1];
    }

    // Optionally set the last element to zero or another placeholder
    arr[5] = 0; // Since the array originally had 6 elements

    // Output the updated array
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}