#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        vector<int> salaries(3);
        for (int i = 0; i < 3; ++i) {
            cin >> salaries[i];
        }

        // Sort the vector
        sort(salaries.begin(), salaries.end());

        // The middle salary is at index 1
        cout << "Case " << caseNum << ": " << salaries[1] << endl;
    }

    return 0;
}
