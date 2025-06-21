#include <bits/stdc++.h>
using namespace std;

int main() {
    // Normally access
    vector<int> v = {1, 2, 3, 4, 5};
    cout << v[3] << endl;

    // back() function - O(1)
    cout << v.back() << endl;

    // front() function - O(1)
    cout << v.front() << endl;

    return 0;
}