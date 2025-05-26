#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int x = 10;
//     int *p = new int;
//     *p = 20;
//     cout << *p << endl;
//     return 0;
// }

// Now checking to static memory
// int* p;
// void fun() {
//     int x = 10;
//     p = &x;
//     cout << "Fun Function: " << *p << endl;
//     return;
// }
// int main() {
//     fun();
//     cout << "Main Function: " << *p << endl;
//     return 0;
// }

// Now checking to dynamic memory
int* p;
void fun() {
    int* x = new int;
    *x = 10;
    p = x;
    cout << "Fun Function: " << *p << endl;
    return;
}
int main() {
    fun();
    cout << "Main Function: " << *p << endl;
    return 0;
}