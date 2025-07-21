#include <bits/stdc++.h>
using namespace std;

int main() {
    // Stack declare
    stack<int> st;

    // Stack input
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    // Stack output
    while(!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}