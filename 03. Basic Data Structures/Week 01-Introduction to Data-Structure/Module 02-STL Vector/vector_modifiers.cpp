#include <bits/stdc++.h>
using namespace std;

int main() {
    // // = or assign() function - O(N)
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int> v2;
    // v2 = v;
    // for(int i = 0; i < v2.size(); i++) {
    //     cout << v2[i] << " ";
    // }

    // // = or assign() function - range based for loops
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int> v2;
    // v2 = v;
    // for(int x:v2) {
    //     cout << x << " ";
    // }




    // // pop_back() function - O(1)
    // vector<int> v = {1, 2, 3, 4, 5};
    // v.pop_back();
    // for(int x:v) {
    //     cout << x << " ";
    // }




    // // insert() function - O(N+K) where K is the number of elements to be inserted.
    // vector<int> v = {1, 2, 3, 4, 5};
    // v.insert(v.begin()+2, 100);
    // for(int x:v) {
    //     cout << x << " ";
    // }
    
    // // insert() function - To add multiple elements
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int> v2 = {100, 200, 300};
    // v.insert(v.begin()+2, v2.begin(), v2.end());
    // for(int x:v) {
    //     cout << x << " ";
    // }



    // // erase() function - O(N+K) where K is the number of elements to be deleted.
    // vector<int> v = {1, 2, 3, 4, 5};
    // v.erase(v.begin()+2);
    // for(int x:v) {
    //     cout << x << " ";
    // }

    // erase() function - start to end
    vector<int> v = {1, 2, 3, 4, 5, 6};
    v.erase(v.begin()+1, v.begin()+4);
    for(int x:v) {
        cout << x << " ";
    }

    return 0;
}