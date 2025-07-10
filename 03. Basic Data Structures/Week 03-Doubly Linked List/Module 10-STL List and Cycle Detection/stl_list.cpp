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

    // // Using range based loops: Construct a list with N elements and the value will be V
    // list<int> l(10, 5);
    // for(int value : l) {
    //     cout << value << endl;
    // }

    // // Construct a list by copying another list list2
    // list<int> l = {1, 2, 3, 4, 5};
    // list<int> l2(l);
    // for(int value : l2) {
    //     cout << value << endl;
    // }

    // // Construct a list by copying all elements from an array A of size N
    // list<int> l = {1, 2, 3, 4, 5};
    // int a[] = {10, 20, 30};
    // list<int> l2(a, a+3);
    // for(int value : l2) {
    //     cout << value << endl;
    // }

    // Construct a list by copying all elements from a vector v
    vector<int> v = {10, 20, 30, 40, 50};
    list<int> l(v.begin(), v.end());
    for(int value : l) {
        cout << value << endl;
    }

    return 0;
}