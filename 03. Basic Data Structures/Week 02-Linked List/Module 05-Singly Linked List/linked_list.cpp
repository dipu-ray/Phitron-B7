#include <bits/stdc++.h>
using namespace std;

int main() {
    // With array
    // int a[5] = {1, 2, 3, 4, 5};
    // cout << (uintptr_t)&a[2] << " " << (uintptr_t)&a[3] << endl;

    // // With vector
    // vector<int> v = {1, 2, 3, 4, 5};
    // cout << (uintptr_t)&v[2] << " " << (uintptr_t)&v[3] << endl;

    // Use in push_back()
    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(100);
    cout << (uintptr_t)&v[4] << " " << (uintptr_t)&v[5] << endl;

    return 0;
}