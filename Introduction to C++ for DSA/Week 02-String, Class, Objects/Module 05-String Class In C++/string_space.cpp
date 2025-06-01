#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Print with not space using
    // string s;
    // cin >> s;
    // cout << s << endl; // Output will only single word.


    // // Print with space using
    // string s;
    // getline(cin, s);
    // cout << s << endl; // Output will show from user input string.


    // // Int + String
    // int n;
    // cin >> n;
    // string s;
    // cin >> s;
    // cout << n << endl; // Print a int value
    // cout << s << endl; // Print a single word string value


    // // Int + String 2
    // int n;
    // cin >> n;
    // string s;
    // getline(cin, s);
    // cout << n << endl; // Print only a int value
    // cout << s << endl;


    // Int + String 3
    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    cout << n << endl; // Print only a int value
    cout << s << endl; // Print a multiple word string value

    return 0;
}