#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Global variables
vector<vector<int>> graph;
vector<bool> visited;
vector<int> result;

// BFS from one starting node
void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// BFS for disconnected graph
void bfsDisconnected(int n) {
    visited = vector<bool>(n, false);
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            bfs(i);
        }
    }
}

int main() {
    // Define graph (example: disconnected)
    graph = {
        {1, 2},    // Node 0
        {0},       // Node 1
        {0},       // Node 2
        {4},       // Node 3
        {3, 5},    // Node 4
        {4}        // Node 5
    };

    int n = graph.size();
    bfsDisconnected(n);

    // Print BFS traversal
    for (int node : result) {
        cout << node << " ";
    }

    // Check connectivity
    bool isConnected = true;
    for (bool v : visited) {
        if (!v) {
            isConnected = false;
            break;
        }
    }

    if (isConnected) {
        cout << "\nGraph is connected" << endl;
    } else {
        cout << "\nGraph is NOT connected" << endl;
    }

    return 0;
}
