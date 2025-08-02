#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Using two int values
    // pair<int, int> p;
    // p = make_pair(10, 20);
    // cout << p.first << endl;
    // cout << p.second << endl;

    // // Using two value string and int
    // pair<string, int> p;
    // p = make_pair("Dipu Ray", 20);
    // cout << p.first << endl;
    // cout << p.second << endl;

    // // Shortcut form of "make_pair()"
    // pair<string, int> p;
    // p = {"Hriday Ray", 20};
    // cout << p.first << endl;
    // cout << p.second << endl;

    // Make a vector using STL Pair
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    for(int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}