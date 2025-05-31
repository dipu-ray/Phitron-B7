#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Update a string value
    // string s = "Hello";
    // s = "Hi";
    // cout << s << endl;


    // // Also similar code from above
    // string s = "Hello";
    // string s2 = "Hi";
    // s = s2;
    // cout << s << endl;


    // // With assign() function
    // string s = "Hello";
    // string s2 = "Hi";
    // s.assign(s2);
    // cout << s << endl;


    // // With assign() function with diffenent way
    // string s = "Hello";
    // string s2 = "Hi";
    // s.assign("Programmers!");
    // cout << s << endl;


    // // With erase() function
    // string s = "Hello world!";
    // s.erase(5); // Delete value after 5 indexing
    // cout << s << endl;


    // // With erase() function
    // string s = "Hello world!";
    // s.erase(3, 2); // Delete 2 value after 3 indexing
    // cout << s << endl;


    // // With replace() function
    // string s = "Hello world!";
    // s.replace(6, 5, "Programmers"); // Range, delete_range, replace word
    // cout << s << endl; // Output: "Hello Programmers!"


    // With insert() function
    string s = "Hello world!";
    s.insert(5, " and");
    cout << s << endl; // Output: "Hello and world!"

    return 0;
}