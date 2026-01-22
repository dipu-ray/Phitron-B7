#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int total = a + b + c;
        if(total%3 == 0 && b <= total/3)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}