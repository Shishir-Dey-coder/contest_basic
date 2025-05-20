#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to compute the distance between two points
long long compute_distance(const vector<int>& a, const vector<int>& b, int m) {
    long long distance = 0;
    for (int i = 0; i < m; i++) {
        distance += abs(a[i] - b[i]);
    }
    return distance;
}

int main() {
    int n, m;
    // Read n and m from standard input
    cin >> n >> m;

    // Read the points from standard input
    vector<vector<int>> points(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> points[i][j];
        }
    }

    // Compute the maximum sum of costs
    long long max_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        // Calculate the distance between consecutive points
        long long distance = compute_distance(points[i], points[i + 1], m);
        max_sum += distance;
    }

    // Write the result to standard output
    cout << max_sum << endl;

    return 0;
}