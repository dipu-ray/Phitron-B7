#include <bits/stdc++.h>
using namespace std;

char grid[101][101];
bool vis_arr[101][101];
int level[101][101];
vector<pair <int, int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n, m;

bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis_arr[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty()) {
        pair <int, int> parent = q.front();
        q.pop();
        int parents_i = parent.first;
        int parents_j = parent.second;

        for(int i = 0; i < 4; i++) {
            int ci = parents_i + d[i].first;
            int cj = parents_j + d[i].second;
            if(valid(ci, cj) && !vis_arr[ci][cj]) {
                q.push({ci, cj});
                vis_arr[ci][cj] = true;
                level[ci][cj] = level[parents_i][parents_j] + 1;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    memset(vis_arr, false, sizeof(vis_arr));
    memset(level, -1, sizeof(level));
    bfs(si, sj);
    cout << level[di][dj] << endl;

    return 0;
}