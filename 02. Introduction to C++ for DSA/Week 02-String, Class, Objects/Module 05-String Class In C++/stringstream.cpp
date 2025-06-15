#include <bits/stdc++.h>
using namespace std;

int main() {
    // string s;
    // getline(cin, s);
    // cout << s << endl;

    // stringstream ss(s);
    // string word;

    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;



    // // Using this with Loops
    // string s;
    // getline(cin, s);
    // cout << s << endl;

    // stringstream ss(s);
    // string word;
    // while(ss >> word) {
    //     cout << word << endl;
    // }



    // We can count word
    string s;
    getline(cin, s);
    cout << s << endl;

    int count = 0;
    stringstream ss(s);
    string word;
    while(ss >> word) {
        cout << word << endl;
        count++;
    }

    cout << count << endl;

    return 0;
}