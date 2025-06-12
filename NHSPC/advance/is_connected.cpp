#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 200005;
vector<int> adj[MAX_N];
bool visited[MAX_N];

void dfs(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  
    }

    int component_count = 0;
    for (int u = 1; u <= N; u++) {
        if (!visited[u]) {
            dfs(u);
            component_count++;
        }
    }

    cout << "Total Components: " << component_count << endl;
    return 0;
}