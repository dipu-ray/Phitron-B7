#include <bits/stdc++.h>
using namespace std;

// Logarithmic Complexity O(logN)
int main() {
    int n;
    cin >> n;

    // // Substraction
    // for(int i = 1; i <= 2*n; i++) {
    //     cout << i << endl;
    // }

    // // Division
    // for(int i = 1; i <= n/2; i++) {
    //     cout << i << endl;
    // }

    // Logarithmic Complexity
    for(int i = 1; i <= n; i*=2) {
        cout << i << endl;
    }

    return 0;
}