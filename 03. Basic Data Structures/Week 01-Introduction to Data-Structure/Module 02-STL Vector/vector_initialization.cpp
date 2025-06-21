#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Type 1 - O(1)
    // vector<int> v;
    // cout << v.size() << endl;

    // // Type 2 - O(N)
    // vector<int> v(5);
    // cout << v.size() << endl;

    // // Type 3 - O(N)
    // vector<int> v(5, -1);
    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    // // Type 4 - O(N)
    // vector<int> v(5, -1);
    // vector<int> v2(v);
    // for(int i = 0; i < v2.size(); i++) {
    //     cout << v2[i] << " ";
    // }

    // // Type 5 - O(N)
    // int a[5] = {1, 2, 3, 4, 5};
    // vector<int> v(a, a+5);
    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    // Type 5: same work with vector  - O(N)
    vector<int> v = {1, 2, 3, 4, 5};
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}