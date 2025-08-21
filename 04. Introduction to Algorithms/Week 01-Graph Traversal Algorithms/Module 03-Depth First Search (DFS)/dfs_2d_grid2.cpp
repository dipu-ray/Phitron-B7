#include <bits/stdc++.h>
using namespace std;

char grid[101][101];
bool vis_arr[101][101];
vector<pair <int, int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

void dfs(int si, int sj) {
    cout << si << " " << sj << endl;
    vis_arr[si][sj] = true;
    for(int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(!vis_arr[ci][cj]) {
            dfs(ci, cj);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;
    memset(vis_arr, false, sizeof(vis_arr));
    dfs(si, sj);

    return 0;
}