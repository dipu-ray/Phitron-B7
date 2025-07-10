#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Remove the value V from the list
    // list<int> l = {10, 20, 30, 40, 50, 20};
    // l.remove(20);
    // for(int value : l) {
    //     cout << value << endl;
    // }

    // Sort the list in ascending order
    list<int> l = {10, 20, 30, 40, 50, 20};
    l.sort();
    for(int value : l) {
        cout << value << endl;
    }

    return 0;
}