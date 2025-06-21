#include <bits/stdc++.h>
using namespace std;

int main() {
    // // = or assign() function
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int> v2;
    // v2 = v;
    // for(int i = 0; i < v2.size(); i++) {
    //     cout << v2[i] << " ";
    // }

    // // Shortcut way or range based for loops
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int> v2;
    // v2 = v;
    // for(int x:v2) {
    //     cout << x << " ";
    // }




    // pop_back() function
    vector<int> v = {1, 2, 3, 4, 5};
    v.pop_back();
    for(int x:v) {
        cout << x << " ";
    }

    return 0;
}