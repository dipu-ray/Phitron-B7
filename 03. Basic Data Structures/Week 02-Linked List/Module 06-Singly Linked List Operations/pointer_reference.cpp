#include <bits/stdc++.h>
using namespace std;

void fun(int* &p) { // Send to reference with &p
    // 1
    // cout << "In Fun Function: " << *p << endl;

    // 2
    // *p = 100;

    // 3
    // int y = 200;
    // p = &y;

    // 4
    cout << "In Fun Function: " << &p << endl;
}

int main() {
    int x = 10;
    int* p = &x;

    fun(p);

    // 1
    // cout << "In Main Function: " << *p << endl;

    // 2
    // cout << x << endl;

    // 3
    // cout << *p << endl;

    // 4
    cout << "In Main Function: " << &p << endl;

    return 0;
}