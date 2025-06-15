#include <iostream>
#include <iomanip> // This header file for Setprecision
using namespace std;

// EOF - End of file
// int main() {
//     int x;
//     while(cin >> x) {
//         cout << x << endl;
//     }
//     return 0;
// }

// Setprecision in C++
int main() {
    double d = 50.56789;
    cout << fixed << setprecision(5) << d << endl;
    return 0;
}