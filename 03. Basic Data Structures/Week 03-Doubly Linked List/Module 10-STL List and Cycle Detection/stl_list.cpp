#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Construct a list with 0 elements
    // list<int> l;
    // cout << l.size() << endl;

    // // Construct a list with N elements and the value will be garbage
    // list<int> l(10);
    // cout << l.size() << endl;

    // // Construct a list with N elements and the value will be V
    // list<int> l(10, 3);
    // cout << *l.begin() << endl; // Because iterator l with dereference

    //  // Using iterator loops: Construct a list with N elements and the value will be V
    // list<int> l(10, 3);
    // for(auto it = l.begin(); it != l.end(); it++) {
    //     cout << *it << endl;
    // }

    // Using range based loops: Construct a list with N elements and the value will be V
    list<int> l(10, 5);
    for(int value : l) {
        cout << value << endl;
    }

    return 0;
}