#include <bits/stdc++.h>
using namespace std;

// Reverse words. Input: I love you. Output: I evol uoy 
int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    ss >> word;
    cout << word;

    while(ss >> word) {
        reverse(word.begin(), word.end());
        cout << " " << word; // Problem Solved
    }

    return 0;
}