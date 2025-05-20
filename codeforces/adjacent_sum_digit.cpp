#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to check if such an n exists
string checkExistence(int x, int y) {
    // If y is not equal to x + 1 and y is not equal to 1 (when x is 999...9), then it's impossible
    if (y != x + 1 && y != 1) {
        return "NO";
    }
    // If y == x + 1, then it's possible
    if (y == x + 1) {
        return "YES";
    }
    // If y == 1 and x is a number like 999...9 (sum of digits is 9*k), then it's possible
    if (y == 1 && x % 9 == 0) {
        return "YES";
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    vector<string> results; // Store results here

    while (t--) {
        int x, y;
        cin >> x >> y;
        results.push_back(checkExistence(x, y)); // Store the result
    }

    // Print all results at the end
    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}