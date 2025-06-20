#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length(), l = 0, u = 0, d = 0, sp = 0;
    for (char c : s) {
        if (islower(c)) l++;
        else if (isupper(c)) u++;
        else if (isdigit(c)) d++;
        else if (c == '@' || c == '!' || c == '#' || c == '$' || c == '&') sp++;
    }
    cout << (n >= 8 && d && sp && l * 3 >= n && u * 3 >= n ? "Yes\n" : "No\n");
    return 0;
}