#include <bits/stdc++.h>
using namespace std;

int main() {
    // int n;
    // cin >> n;

    // vector<string> v(n);

    // for(int i = 0; i < n; i++) {
    //     cin >> v[i];
    // }

    // for(string s : v) {
    //     cout << s << " ";
    // }




    int n;
    cin >> n;

    cin.ignore();
    vector<string> v(n);

    for(int i = 0; i < n; i++) {
        getline(cin, v[i]);
    }

    for(string s : v) {
        cout << s << " ";
    }

    return 0;
}