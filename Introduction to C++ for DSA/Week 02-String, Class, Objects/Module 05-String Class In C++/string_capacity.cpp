#include <bits/stdc++.h>
using namespace std;

int main() {
    // string s = "Hello";
    // cout << s.size() << endl; // Print string size
    // cout << s.max_size() << endl; // Print string max size
    // cout << s.capacity() << endl; // Increase capacity or size


    // string s = "Hello";
    // s.clear();
    // cout << s << endl; // Output are nothings.
    // cout << s.size() << endl; // Output are 0.

    // cout << s.empty() << endl; // Output are true or 1.
    // if(s.empty() == 1) {
    //     cout << "Empty" << endl;
    // }
    // else {
    //     cout << "Not empty" << endl;
    // }


    // string s = "Hello world";
    // s.resize(5);
    // cout << s << endl; // Output: "Hello"


    string s = "Hello world";
    s.resize(15, 'd');
    cout << s << endl; // Size increase. The output: Hello worlddddd.

    return 0;
}