#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);

    // Loops for input queries
    for(int i = 0; i < q; i++) {
        int value;
        cin >> value;

        // Find the x in array using flag
        int flag = 0;
        int left = 0;
        int right = n-1;

        while(left <= right) {
            int middle = (left+right)/2;
            if(a[middle] == value) {
                flag = 1;
                break;
            }

            else if(a[middle] > value) {
                right = middle - 1;
            }

            else {
                left = middle + 1;
            }
        }

        // Check
        if(flag == 1) {
            cout << "found" << endl;
        }
        else {
            cout << "not found" << endl;
        }
    }

    return 0;
}