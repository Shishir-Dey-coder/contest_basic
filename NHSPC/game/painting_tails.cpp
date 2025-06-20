#include <iostream>
using namespace std;

string determineWinner(long long N) {
    long long remainder = N % 7;
    if (remainder == 0 || remainder == 1) {
        return "Oh no, my eggs! :(";
    } else {
        return "No eggs for you! :D";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    for (int i = 1; i <= T; ++i) {
        long long N;
        cin >> N;
        string result = determineWinner(N);
        cout << "Case " << i << ": " << result << "\n";
    }
    
    return 0;
}