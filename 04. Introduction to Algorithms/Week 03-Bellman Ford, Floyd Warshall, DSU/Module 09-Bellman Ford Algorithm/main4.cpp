#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int a, b, c;

    // Initialize with constructor
    Edge(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int dis[1005];
vector<Edge> edge_list;

// Update part - it make global
int n, e;

void bellman_ford(int n) {
    // Find out edge and doing relaxation
    for(int i = 0; i < n-1; i++) {
        for(auto ed : edge_list) {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;

            if(dis[a] != INT_MAX && dis[a]+c < dis[b]) {
                dis[b] = dis[a]+c;
            }
        }
    }
}

int main() {
    cin >> n >> e;

    // Take every edge input
    while(e--) {
        int a, b, c; // a = a node, b = b node, and c = cost of a and b node
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
        edge_list.push_back(Edge(b, a, c)); // This line for Undirected
    }

    // Every edge distance are set to infinite
    for(int i = 0; i < n; i++)
        dis[i] = INT_MAX;
    dis[0] = 0; // Define distance of source 0 = 0

    // Call The Function
    bellman_ford(n);

    // This loops for output showing
    for(int i = 0; i < n; i++) {
        cout << i << "->" << dis[i] << endl;
    }

    return 0;
}

// Input:
// 4 4
// 0 2 5
// 0 3 12
// 2 1 2
// 1 3 3

// Output:
// 0->0
// 1->7
// 2->5
// 3->10