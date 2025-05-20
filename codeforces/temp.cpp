#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> all_results; 

    while (t--) {
        int n;
        cin >> n;

        vector<string> rows(n);
        for (int i = 0; i < n; ++i) {
            cin >> rows[i]; 
        }


        vector<int> result;
        for (int i = n - 1; i >= 0; --i) {
            for (int j = 0; j < 4; ++j) {
                if (rows[i][j] == '#') {
                    result.push_back(j + 1);
                    break;
                }
            }
        }


        string result_str;
        for (int i = 0; i < result.size(); ++i) {
            if (i > 0) result_str += " ";
            result_str += to_string(result[i]);
        }
        all_results.push_back(result_str);
    }


    for (const string& res : all_results) {
        cout << res << endl;
    }

    return 0;
}
