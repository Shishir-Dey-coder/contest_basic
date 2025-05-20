#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  


    vector<vector<int>> points(n, vector<int>(m));


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> points[i][j];
    }
}


    return 0;
}