#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Delete elements from a specific position
    // list<int> l = {10, 20, 30, 40, 50};
    // l.erase(next(l.begin(), 2));
    // for(int value : l) {
    //     cout << value << endl;
    // }

    // // Delete elements from a specific position - multiple
    // list<int> l = {10, 20, 30, 40, 50};
    // l.erase(next(l.begin(), 2), next(l.begin(), 4));
    // for(int value : l) {
    //     cout << value << endl;
    // }

    // // Replace all the value with replace_value. Not under a list STL
    // list<int> l = {10, 20, 30, 20, 20, 20, 20, 80};
    // replace(l.begin(), l.end(), 20, 100);
    // for(int value : l) {
    //     cout << value << endl;
    // }

    // Find the value V. Not under
    list<int> l = {10, 20, 30, 20, 20, 20, 20, 80};
    auto it = find(l.begin(), l.end(), 200);
    if(it == l.end()) {
        cout << "Not found" << endl;
    }
    else {
        cout << "Found" << endl;
    }

    return 0;
}