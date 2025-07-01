#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next; // Because of, address are going to always in the next address

    // To add constructor
    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

int main() {
    Node a(10), b(20), c(30);
    a.next = &b;
    b.next = &c;

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