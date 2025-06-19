#include <bits/stdc++.h>
using namespace std;



// N = 1000 (From user)

// Compare with six complexity          Operations         Ranking
// 1. Constant: O(1)                    -> 1               -> 1 (The best complexity)
// 2. Linear: O(N)                      -> 1000            -> 4
// 3. Logarithmic: O(logN)              -> 10              -> 2
// 4. Square Root: O(sqrt(N))           -> 32              -> 3
// 5. Quadratic: O(N*N)                 -> 1000000         -> 6 (The bad complexity)
// 6. Linearithmic: O(NlogN)            -> 10000           -> 5



// // Constant: O(1) -> 1
// int main() {
//     // // Program 1
//     // cout << "Hello world!" << endl;

//     // Program 2
//     int n;
//     cin >> n;
//     int sum = 0;
//     sum = (n*(n+1)) / 2;
//     cout << sum << endl;

//     return 0;
// }



// // Linear: O(N) -> 1000
// int main() {
//     int n;
//     cin >> n;
//     int sum = 0;
//     for(int i = 1; i <= n; i++) {
//         sum += i;
//     }
//     cout << sum << endl;

//     return 0;
// }



// // Logarithmic: O(logN) -> 10
// int main() {
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i*=2) {
//         cout << i << endl;
//     }

//     return 0;
// }



// // Square Root: O(sqrt(N)) -> 32
// int main() {
//     int n;
//     cin >> n;
//     for(int i = 1; i <= sqrt(n); i++) {
//         cout << i << endl;
//     }

//     return 0;
// }



// // Quadratic: O(N*N) -> 1000000
// int main() {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             cout << "Hello world" << endl;
//         }
//     }

//     return 0;
// }



// Linearithmic: O(NlogN) -> 10000
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j *= 2) {
            cout << "Hello" << endl;
        }
    }

    return 0;
}