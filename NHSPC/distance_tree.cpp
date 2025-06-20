#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX = 2e5 + 5;
vector<int> graph[MAX];

// সহজ BFS ফাংশন
pair<int, int> getFarthestNode(int start, int n) {
    vector<int> level(n + 1, -1);
    queue<int> q;
    q.push(start);
    level[start] = 0;

    int lastNode = start;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : graph[u]) {
            if (level[v] == -1) {
                level[v] = level[u] + 1;
                q.push(v);

                // আপডেট করছি এখন পর্যন্ত সবচেয়ে দূরের নোড
                if (level[v] > level[lastNode]) {
                    lastNode = v;
                }
            }
        }
    }

    return {lastNode, level[lastNode]};
}

int main() {
    int n;
    cin >> n;

    // এজ ইনপুট নেওয়া
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // প্রথম BFS: 1 থেকে সবচেয়ে দূরের node বের করো
    int x = getFarthestNode(1, n).first;

    // দ্বিতীয় BFS: x থেকে সবচেয়ে দূরের node বের করো = diameter
    int diameter = getFarthestNode(x, n).second;

    cout << diameter << endl;

    return 0;
}
