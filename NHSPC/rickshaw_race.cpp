#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, k, d;
    cin >> r >> k >> d;

    if (r == k) {
        cout << "Draw 0";
    } else {
        int time = d / abs(r - k);
        if (r > k) {
            cout << "Rahim " << time;
        } else {
            cout << "Karim " << time;
        }
    }

    return 0;
}
