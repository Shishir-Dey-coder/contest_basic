#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N;
        cin >> N; 
        vector<int> runes(N); 
        for (int i = 0; i < N; ++i) {
            cin >> runes[i]; 
        }

        int result = runes[0]; 
        for (int i = 1; i < N; ++i) {
            result = gcd(result, runes[i]);
        }

        cout << result << endl; 
    }
    return 0;
}
