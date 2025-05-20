#include <iostream>
#include <vector>
using namespace std;

// Linearly search target in arr.
// If target is present, return the index;
// otherwise, return -1
int search(vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {11, 10, 30, 15,1,12};
    int x = 1;
    cout << search(arr, x)<<endl;
    return 0;
}