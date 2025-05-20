#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int a, b, c;
    vector<string> results;

    cin >> t;
    while (t--) {
        cin >> a >> b >> c;


        if (a == b + c || b == a + c || c == a + b) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    for (const string& result : results) {
        cout << result << endl; 
    }

    return 0;
}
