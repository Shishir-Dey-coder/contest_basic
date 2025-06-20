#include <iostream>
using namespace std;

string determineWinner(int N) {
    if (N == 1) return "Tie";
    else if (N % 2 == 0) return "CodeMask";
    else return "CodeNewtons";
}

int main() {
    int T, N;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        cin >> N;
        cout << "Case " << i << ": " << determineWinner(N) << endl;
    }
    return 0;
}