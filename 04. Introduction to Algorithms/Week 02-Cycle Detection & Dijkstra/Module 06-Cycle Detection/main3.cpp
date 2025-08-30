// Detect cycle in directed graph using DFS

#include <bits/stdc++.h>
using namespace std;
bool vis[101];
vector<int> adj_list[101];
bool pathVis[101];
bool cycle;

void dfs(int src) {
    vis[src] = true;
    pathVis[src] = true;
    for(int child : adj_list[src]) {
        if(vis[child] && pathVis[child])
            cycle = true;
        if(!vis[child]) {
            dfs(child);
        }
    }
    pathVis[src] = false;
}

int main() {
    int n, e;
    cin >> n >> e;
    while(e--) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(pathVis, false, sizeof(pathVis));
    cycle = false;
    for(int i = 0; i < n; i++) {
        if(!vis[i])
            dfs(i);
    }

    if(cycle)
        cout << "Cycle Detected\n";
    else
        cout << "No Cycle\n";

    return 0;
}