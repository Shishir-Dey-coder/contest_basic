#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; ++i) {
        cin >> points[i].first >> points[i].second;
    }

    double minDist = 1e9; // a very large number

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            double dx = points[i].first - points[j].first;
            double dy = points[i].second - points[j].second;
            double dist = sqrt(dx * dx + dy * dy);
            if (dist < minDist) {
                minDist = dist;
            }
        }
    }

    cout << fixed << setprecision(15) << minDist << endl;
    return 0;
}
