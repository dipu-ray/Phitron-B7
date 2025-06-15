#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    cout << s[1] << endl;
    cout << s.at(3) << endl;
    cout << s[s.size()-1]; // Same output
    cout << s.back() << endl; // Same output
    cout << s.front() << endl;

    return 0;
}