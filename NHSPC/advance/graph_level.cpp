#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int cs = 1; cs <= T; cs++) {
        int N;
        cin >> N;
        int level = ceil(log2(N + 1));
        cout << "Case " << cs << ": " << level << "\n";
    }

    return 0;
}
