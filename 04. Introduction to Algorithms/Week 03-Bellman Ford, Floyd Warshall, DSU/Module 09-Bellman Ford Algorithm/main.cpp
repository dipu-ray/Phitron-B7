#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int a, b, c;
    Edge(int a, int b, int c) { // Initialize with constructor
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int dis[1005];

int main() {
    int n, e; // Define node and edge
    cin >> n >> e;
    vector<Edge> edge_list;

    while(e--) { // Take every edge input
        int a, b, c; // a = a node, b = b node, and c = cost of a and b node
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    for(int i = 0; i < n; i++) // Every edge distance are set to infinite
        dis[i] = INT_MAX;
    dis[0] = 0; // Define distance of source 0 = 0

    return 0;
}