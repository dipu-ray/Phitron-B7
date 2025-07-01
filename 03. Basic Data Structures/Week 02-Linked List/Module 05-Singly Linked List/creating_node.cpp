#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next; // Because of, address are going to always in the next address
};

int main() {
    Node a, b, c;
    a.value = 10;
    b.value = 20;
    c.value = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // cout << a.value << " " << b.value << " " << c.value << endl;

    // Access to next value with dereference
    cout << a.value << endl;
    // cout << (*a.next).value << endl;

    // Shortcut from dereference
    cout << a.next->value << endl;

    // A to C value print
    cout << a.next->next->value << endl;

    return 0;
}