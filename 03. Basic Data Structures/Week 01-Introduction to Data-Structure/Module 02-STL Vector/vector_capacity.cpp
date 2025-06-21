#include <bits/stdc++.h>
using namespace std;

int main() {
    // // capacity() function - O(1)
    // vector<int> v;
    // cout << v.capacity() << endl;

    // v.push_back(10);
    // cout << v.capacity() << endl;

    // // When we cross the capacity then value are double
    // v.push_back(10);
    // cout << v.capacity() << endl;

    // v.push_back(10);
    // cout << v.capacity() << endl;

    // v.push_back(10);
    // cout << v.capacity() << endl;

    // v.push_back(10);
    // cout << v.capacity() << endl;




    // // clear() function - O(N)
    // vector<int> v;

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // cout << v.size() << endl;

    // v.clear();
    // cout << v.size() << endl;

    // // Check the element are not delete
    // cout << v[0] << endl;
    // cout << v[1] << endl;
    // cout << v[2] << endl;




    // // empty() function  - O(1)
    // vector<int> v;
    // if(v.empty()) {
    //     cout << "True" << endl;
    // }
    // else {
    //     cout << "False" << endl;
    // }




    // // resize() function  - O(K) where K is the difference between new size and current size
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);

    // v.resize(3);

    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << endl;
    // }




    // // resize() function it can expand
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);

    // v.resize(5);

    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << endl;
    // }




    // resize() function it can expand and you can value assign
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.resize(5, 100);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}