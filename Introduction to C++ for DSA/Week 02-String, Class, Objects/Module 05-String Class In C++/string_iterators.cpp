#include <bits/stdc++.h>
using namespace std;

int main() {
    // string s = "Hello";
    // for(int i = 0; i < s.size(); i++) {
    //     cout << s[i] << endl;
    // }


    // With begin() and end() function
    string s = "Hello";
    cout << *s.begin() << endl; // Output: "H"
    cout << *s.end() << endl; // Output: "null"
    cout << *(s.end()-1) << endl; // Output: "o"

    return 0;
}