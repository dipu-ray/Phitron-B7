#include <bits/stdc++.h>
using namespace std;

// Static array return from function in C++
// int* fun() {
//     int arr[5];
//     for(int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }
//     return arr;
// }
// int main() {
//     int* x = fun();
//     for(int i = 0; i < 5; i++) {
//         cout << x[i] << " "; // Output: Waring or segment fault
//     }
//     return 0;
// }

// Dynamic array return from function in C++
int* fun() {
    int* arr = new int[5];
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    return arr;
}
int main() {
    int* x = fun();
    for(int i = 0; i < 5; i++) {
        cout << x[i] << " "; // Output: From user input
    }
    return 0;
}