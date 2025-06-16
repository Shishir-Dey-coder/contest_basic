#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 1, 5, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Bubble Sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if elements are in wrong order
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Output the sorted array+
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
