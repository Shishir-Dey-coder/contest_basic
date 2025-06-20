#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countPasswords(const string &s) {
    int count = 0;
    bool hasLower = false, hasUpper = false, hasDigit = false;
    int start = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (islower(s[i])) hasLower = true;
        else if (isupper(s[i])) hasUpper = true;
        else if (isdigit(s[i])) hasDigit = true;

        if (hasLower && hasUpper && hasDigit) {
            count++;
            hasLower = hasUpper = hasDigit = false;
            start = i + 1;
        }
    }

    return count;
}

int main() {
    string s;
    while (getline(cin, s)) {
        cout << countPasswords(s) << endl;
    }
    return 0;
}