// Sum 1 to 5. Answer: 15

#include <bits/stdc++.h>
using namespace std;

// There have no duplicate value
int recursion(int n) { // O(N)
    if(n > 5)
        return 0;
    int sum = recursion(n + 1);
    return sum + n;
}

int main() {
    cout << recursion(1) << endl;

    return 0;
}