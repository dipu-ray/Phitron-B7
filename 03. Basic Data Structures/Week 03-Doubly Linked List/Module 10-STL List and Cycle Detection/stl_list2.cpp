#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Returns the size of the list
    // list<int> l = {10, 20, 30, 40, 50};
    // cout << l.size() << endl;

    // // Returns the maximum size that the list can hold
    // list<int> l = {10, 20, 30, 40, 50};
    // cout << l.max_size() << endl;

    // // Clears the list elements
    // list<int> l = {10, 20, 30, 40, 50};
    // l.clear();
    // for(int value : l) {
    //     cout << value << endl;
    // }

    // // Return true/false if the list is empty or not.
    // list<int> l = {10, 20, 30, 40, 50};
    // if(l.empty()) {
    //     cout << "Empty!" << endl;
    // }
    // else {
    //     cout << "Not emtpy! " << endl;
    //     for(int value : l) {
    //         cout << value << endl;
    //     }
    // }

    // // Change the size of the list
    // list<int> l = {10, 20, 30, 40, 50};
    // l.resize(3);
    // for(int value : l) {
    //     cout << value << endl;
    // }

    // Change the size of the list 2
    list<int> l = {10, 20, 30, 40, 50};
    l.resize(10, 100);
    for(int value : l) {
        cout << value << endl;
    }

    return 0;
}