#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> denominations = {500, 100, 50, 10, 5, 1};
    vector<int> result;

    for (int d : denominations) {
        while (N >= d) {
            result.push_back(d);
            N -= d;
        }
    }

    sort(result.begin(), result.end());

    for (int note : result) {
        cout << note << " ";
    }

    return 0;
}