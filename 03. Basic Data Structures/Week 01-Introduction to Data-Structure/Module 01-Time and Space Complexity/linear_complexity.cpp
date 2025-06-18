#include <bits/stdc++.h>
using namespace std;

// Linear complexity O(n)
int main() {
    int n;
    cin >> n;

    // // Example 1
    // for(int i = 1; i <= n; i++) {
    //     cout << i << " ";
    // }

    // // Example 2
    // for(int i = 1; i <= n/2; i++) {
    //     cout << i << " ";
    // }

    // Example 3
    for(int i = 1; i <= n; i+=2) {
        cout << i << " ";
    }

    return 0;
}