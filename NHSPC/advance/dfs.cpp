#include<bits/stdc++.h>
using namespace std;


vector<int> adj[100];

int visited[100];



void dfs(int at){
    if(visited[at]) return;
    visited[at] = 1;
    for(int i = 0;i<visited[at].size();i++){
        dfs(visited[at][i]);
    }

}