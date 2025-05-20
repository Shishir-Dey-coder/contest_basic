#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> s;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string S;
        cin >> S;
        int aCount = S.length() - 1; // Count 'a's excluding the first 'b'
        if (aCount % 2 != 0) {
            if (aCount == 1) {
                S += "a"; // Add an 'a' if only one exists
            } else {
                S.pop_back(); // Remove the last 'a' to make it even
            }
        }
        s.push_back(S);
    }

    // Find the longest processed line
    int maxLength = 0;
    for (const auto& line : s) {
        maxLength = max(maxLength, (int)line.length());
    }

    // Print the processed lines with proper alignment
    for (const auto& line : s) {
        int spaces = (maxLength - line.length()) / 2;
        cout << string(spaces, ' ') << line << endl;
    }

    return 0;
}
