#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // // SQRT Complexity - O(sqrt(n))
    // for(int i = 1; i <= sqrt(n); i++) {
    //     cout << i << endl;
    // }

    // // Find out divisor from loops
    // for(int i = 1; i <= n; i++) {
    //     if(n%i == 0) {
    //         cout << i << " ";
    //     }
    // }

    // Find out divisor from loops - Optimize way
    for(int i = 1; i <= sqrt(n); i++) {
        if(n%i == 0) {
            cout << i << " " << n/i << " ";
        }
    }

    // Shortcut of sqrt
    // [i <= sqrt(n)] = [i*i <= n]

    return 0;
}