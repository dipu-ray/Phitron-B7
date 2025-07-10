#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Access the tail element
    // list<int> l = {10, 20, 30, 40, 50};
    // cout << "Tail: " << l.back() << endl;

    // // Access the head element
    // list<int> l = {10, 20, 30, 40, 50};
    // cout << "Head: " << l.front() << endl;
    // OR
    // cout << *l.begin() << endl;

    // Access the ith element
    list<int> l = {10, 20, 30, 40, 50};
    cout << *next(l.begin(), 3) << endl;

    return 0;
}