#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        bool has_odd = false;
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            if (A[i] % 2 != 0) {
                has_odd = true;
            }
        }
        if (has_odd) {
            cout << "Prosanto" << endl;
        } else {
            cout << "Sudipto" << endl;
        }
    }
    return 0;
}


//nim game.......