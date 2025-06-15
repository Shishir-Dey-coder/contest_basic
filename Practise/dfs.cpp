#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000;

vector<int> adj[MAX];
bool visited[MAX];

// DFS to count component size
int dfs(int at) {
    visited[at] = true;
    int size = 1;

    for (int neighbor : adj[at]) {
        if (!visited[neighbor]) {
            size += dfs(neighbor);
        }
    }

    return size;
}

int main() {
    int n, m;
    cin >> n >> m; // n = number of nodes, m = number of edges

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // since it's undirected
    }

    int max_component_size = 0;

    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            int component_size = dfs(i);
            max_component_size = max(max_component_size, component_size);
        }
    }

    cout << "Largest connected component size: " << max_component_size << endl;
    return 0;
}
