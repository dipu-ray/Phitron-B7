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

int main() {
    // Define node and edge
    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;

    // Take every edge input
    while(e--) {
        int a, b, c; // a = a node, b = b node, and c = cost of a and b node
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    // Every edge distance are set to infinite
    for(int i = 0; i < n; i++)
        dis[i] = INT_MAX;
    dis[0] = 0; // Define distance of source 0 = 0

    // Find out edge and doing relaxation
    for(int i = 0; i < n-1; i++) {
        for(auto ed : edge_list) {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;

            if(dis[a]+c < dis[b] && dis[a] != INT_MAX) {
                dis[b] = dis[a]+c;
            }
        }
    }

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