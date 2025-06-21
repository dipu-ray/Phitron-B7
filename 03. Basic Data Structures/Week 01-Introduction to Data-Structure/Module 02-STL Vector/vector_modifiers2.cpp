#include <bits/stdc++.h>
using namespace std;

int main() {
    // // replace() function - O(N)
    // vector<int> v = {1, 2, 3, 2, 5, 2};
    // replace(v.begin(), v.end(), 2, 100);
    // for(int x:v) {
    //     cout << x << " ";
    // }

    // // replace() function method 2
    // vector<int> v = {1, 2, 3, 2, 5, 2};
    // replace(v.begin(), v.end()-1, 2, 100);
    // for(int x:v) {
    //     cout << x << " ";
    // }




    // // find() function - O(N)
    // vector<int> v = {1, 2, 3, 2, 5, 2};
    // auto it = find(v.begin(), v.end(), 100);
    // if(it == v.end()) {
    //     cout << "Not found" << endl;
    // }
    // else {
    //     cout << "Found" << endl;
    // }

    // find() function - using pointer
    vector<int> v = {1, 2, 3, 2, 5, 2};
    auto it = find(v.begin(), v.end(), 5);
    cout << *it << endl;

    return 0;
}