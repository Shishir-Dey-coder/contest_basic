#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    int sum = 0;
    vector<int> arr;  // Using vector

    cin >> N >> A >> B;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        arr.push_back(x);  // Corrected push_back usage
    }

    for (int j = A; j <= B; j++) {  // Looping fix (inclusive range)
        sum += arr[j];
    }

    cout << sum << endl;
    return 0;
}
