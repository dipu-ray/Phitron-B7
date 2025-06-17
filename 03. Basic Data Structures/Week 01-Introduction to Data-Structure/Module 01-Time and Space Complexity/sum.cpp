#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // // Using Loops
    // int sum = 0;
    // for(int i = 1; i <= n; i++) {
    //     sum += i;
    // }

    // Using Formula
    int sum = (n * (n+1)) / 2;
    cout << sum << endl;

    return 0;
}