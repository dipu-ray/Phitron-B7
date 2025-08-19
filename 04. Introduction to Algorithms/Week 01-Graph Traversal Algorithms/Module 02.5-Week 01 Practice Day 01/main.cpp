// Problem: Check if a node can be visited or not

#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1001];
bool vis_arr[1001];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis_arr[src] = true;

    while(!q.empty()) {
        int parent = q.front();
        q.pop();
        for(int child : adj_list[parent]) {
            if(vis_arr[child] == false) {
                q.push(child);
                vis_arr[child] = true;
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
    int source, destination;
    cin >> source >> destination;
    bfs(source);

    if(vis_arr[destination])
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}