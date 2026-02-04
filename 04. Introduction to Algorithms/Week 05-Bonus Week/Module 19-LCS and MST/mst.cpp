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

bool cmp(Edge l, Edge r) {
    return l.c < r.c;
}

int main() {
    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;
    while(e--) {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }
    sort(edge_list.begin(), edge_list.end(), cmp);
    for(auto ed : edge_list)
        cout << ed.a << " " << ed.b << " " << ed.c << endl;

    return 0;
}

// Input:
// 5 7
// 0 1 2
// 2 4 4
// 0 3 3
// 1 4 5
// 0 2 3
// 1 2 7
// 4 3 6

// Output:
// 0 1 2
// 0 3 3
// 0 2 3
// 2 4 4
// 1 4 5
// 4 3 6
// 1 2 7