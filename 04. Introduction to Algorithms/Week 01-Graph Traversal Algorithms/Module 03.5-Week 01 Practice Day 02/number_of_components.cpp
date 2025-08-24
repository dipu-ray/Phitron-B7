#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1001];
bool vis_arr[1001];

void dfs(int src) {
    vis_arr[src] = true;
    for(int child : adj_list[src])
        if(vis_arr[child] == false)
            dfs(child);
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
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(vis_arr[i] == false) {
            dfs(i);
            count++;
        }
    }

    cout << count << " " << "Components" << endl;
    return 0;
}