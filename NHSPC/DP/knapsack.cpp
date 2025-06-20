#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, C;
    cin >> N >> C;

    vector<pair<int, int>> items(N);
    for (int i = 0; i < N; ++i) {
        cin >> items[i].first >> items[i].second;
    }

    vector<int> dp(C + 1, 0);

    for (const auto& item : items) {
        int W = item.first;
        int V = item.second;
        for (int w = C; w >= W; --w) {
            if (dp[w - W] + V > dp[w]) {
                dp[w] = dp[w - W] + V;
            }
        }
    }

    cout << dp[C] << '\n';

    return 0;
}