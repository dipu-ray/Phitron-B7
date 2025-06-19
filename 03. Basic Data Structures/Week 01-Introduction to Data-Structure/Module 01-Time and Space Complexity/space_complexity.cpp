#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Example with loops
    // int n; // O(1)
    // cin >> n;
    // int sum = 0; // O(1)
    // for(int i = 0; i < n; i++) { // O(1)
    //     sum += i;
    // }
    // cout << sum << endl;



    // // Example with arrays
    // int n; // O(1)
    // cin >> n;
    // int a[n]; // O(N)
    // for(int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }



    // Example with 2D arrays
    int n; // O(1)
    cin >> n;
    int a[n][n]; // O(N*N)
    for(int i = 0; i < n; i++) {
        cin >> a[i][i];
    }

    // They have matter of how much to need of size int or array

    return 0;
}