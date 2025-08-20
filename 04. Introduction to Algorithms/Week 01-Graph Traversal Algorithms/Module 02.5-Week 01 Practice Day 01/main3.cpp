// Problem: Path printing theory

#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1001];
bool vis_arr[1001];
int level[1001];
int parent_arr[1001];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis_arr[src] = true;
    level[src] = 0;

    while(!q.empty()) {
        int parent = q.front();
        q.pop();
        for(int child : adj_list[parent]) {
            if(vis_arr[child] == false) {
                q.push(child);
                vis_arr[child] = true;
                level[child] = level[parent] + 1;
                parent_arr[child] = parent;
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    while(e--) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis_arr, false, sizeof(vis_arr));
    memset(level, -1, sizeof(level));
    memset(parent_arr, -1, sizeof(parent_arr));
    int source, destination;
    cin >> source >> destination;
    bfs(source);

    vector<int> path;
    int node = destination;
    while(node != -1) {
        path.push_back(node);
        node = parent_arr[node];
    }
    reverse(path.begin(), path.end());
    for(int x : path) {
        cout << x << " ";
    }

    return 0;
}