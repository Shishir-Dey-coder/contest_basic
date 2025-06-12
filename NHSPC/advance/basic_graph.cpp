#include<bits/stdc++.h>
using namespace std;


const int MAX_N = 200005;
vector<int> adj[MAX_N];
bool visited[MAX_N];

// int dfs(int at){
//     if (visited[at]) return;
//     visited[at] = true;
//     
//     for(auto s: adj[at]){
//         dfs(s);
//     }
// }


int dfs(int u) {
    visited[u] = true;
    int count = 1;
    for (int v : adj[u]) {
        if (!visited[v]) {
            count += dfs(v);
        }
    }
    return count;
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);


    }
    int max_component_size = 0;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            int component_size = dfs(i);
            if (component_size > max_component_size) {
                max_component_size = component_size;
            }
        }
    }

    cout << max_component_size << '\n';
    return 0;
}