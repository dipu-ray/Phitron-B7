#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1001];
bool vis_arr[1001];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis_arr[src] = true;

    while(!q.empty()) {
        // Ber kore ana
        int parent = q.front();
        q.pop();
        // Oi node ke niye kaj
        cout << parent << " ";
        // Children gulo push kora
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
    bfs(0);

    return 0;
}