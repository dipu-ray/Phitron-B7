#include <bits/stdc++.h>
using namespace std;

int main() {
    // Assign another list
    list<int> l = {10, 20, 30};
    list<int> l2;
    l2.assign(l.begin(), l.end());
    for(int value : l2) {
        cout << value << endl;
    }

    return 0;
}