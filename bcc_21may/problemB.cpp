// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     vector<int> result;

//     while (t--) {
//         vector<int> temp(3); 
//         cin >> temp[0] >> temp[1] >> temp[2];
//         sort(temp.begin(), temp.end());
//         result.push_back(temp[1]);
//     }

//     for (int i = 0; i < result.size(); i++) {
//         cout << "Case " << i + 1 << ": " << result[i] << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int a, b, c;
        cin >> a >> b >> c;

        // Store salaries in an array
        int salaries[3] = {a, b, c};

        // Sort the array
        sort(salaries, salaries + 3);

        // The middle salary is now at index 1
        cout << "Case " << caseNum << ": " << salaries[1] << endl;
    }

    return 0;
}
