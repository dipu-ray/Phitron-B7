#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Construct a list with 0 elements
    // list<int> l;
    // cout << l.size() << endl;

    // // Construct a list with N elements and the value will be garbage
    // list<int> l(10);
    // cout << l.size() << endl;

    // Construct a list with N elements and the value will be V
    list<int> l(10, 3);
    cout << l.size() << endl;

    return 0;
}