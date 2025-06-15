#include <bits/stdc++.h>
using namespace std;

int main() {
    // string s = "Hello";
    // for(int i = 0; i < s.size(); i++) {
    //     cout << s[i] << endl;
    // }


    // With begin() and end() function
    // string s = "Hello";
    // cout << *s.begin() << endl; // Output: "H"
    // cout << *s.end() << endl; // Output: "null"
    // cout << *(s.end()-1) << endl; // Output: "o"


    // // Iterator in C++
    // string s = "Hello world";
    // for(string:: iterator it = s.begin(); it < s.end(); it++) {
    //     cout << *it << endl;
    // }


    // Updated version of Iterator in C++, after 11 version.
    string s = "Hello world";
    for(auto it = s.begin(); it < s.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}