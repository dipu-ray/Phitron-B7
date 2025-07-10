#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Assign another list
    // list<int> l = {10, 20, 30};
    // list<int> l2;
    // l2 = l;
    // // l2.assign(l.begin(), l.end());
    // for(int value : l2) {
    //     cout << value << endl;
    // }

    // // Add an element to the tail & add an element to the head.
    // list<int> l = {10, 20, 30};
    // l.push_back(40);
    // l.push_front(5);
    // for(int value : l) {
    //     cout << value << endl;
    // }

    // // Delete the tail & delete the head
    // list<int> l = {10, 20, 30, 40, 50};
    // l.pop_back();
    // l.pop_front();
    // for(int value : l) {
    //     cout << value << endl;
    // }

    // Insert elements at a specific position
    list<int> l = {10, 20, 30, 40, 50};
    cout << *next(l.begin(), 1) << endl;
    cout << *next(l.begin(), 2) << endl;
    cout << *next(l.begin(), 3) << endl;

    return 0;
}