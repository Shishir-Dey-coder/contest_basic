#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> result;

    while (t--) {
        vector<int> temp(3); 
        cin >> temp[0] >> temp[1] >> temp[2];
        sort(temp.begin(), temp.end());
        result.push_back(temp[1]);
    }

    for (int i = 0; i < result.size(); i++) {
        cout << "Case " << i + 1 << ": " << result[i] << endl;
    }

    return 0;
}
