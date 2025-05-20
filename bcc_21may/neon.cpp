#include <bits/stdc++.h>
using namespace std;

bool isNeon(int n) {
    int square = n * n;
    int sum = 0;

    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }

    return sum == n;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isNeon(number))
        cout << number << " is a Neon number." << endl;
    else
        cout << number << " is not a Neon number." << endl;

    return 0;
}
