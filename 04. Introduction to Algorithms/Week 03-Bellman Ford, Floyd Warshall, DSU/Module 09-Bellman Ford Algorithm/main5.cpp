#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int a, b, c;
    Edge(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int dis[1005];
vector<Edge> edge_list;
int n, e;

void bellman_ford(int src) {
    // Relax edges n-1 times
    for(int i = 0; i < n - 1; i++) {
        for(auto ed : edge_list) {
            if(dis[ed.a] != INT_MAX &&
               dis[ed.a] + ed.c < dis[ed.b]) {
                dis[ed.b] = dis[ed.a] + ed.c;
            }
        }
    }

    // Check negative cycle
    for(auto ed : edge_list) {
        if(dis[ed.a] != INT_MAX &&
           dis[ed.a] + ed.c < dis[ed.b]) {
            cout << "Negative weighted cycle detected\n";
            return;
        }
    }

    // Print distances
    for(int i = 0; i < n; i++) {
        if(dis[i] == INT_MAX)
            cout << i << "->INF\n";
        else
            cout << i << "->" << dis[i] << endl;
    }
}

int main() {
    cin >> n >> e;

    while(e--) {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c)); // Directed
    }

    for(int i = 0; i < n; i++)
        dis[i] = INT_MAX;

    dis[0] = 0; // source node
    bellman_ford(0);

    return 0;
}
