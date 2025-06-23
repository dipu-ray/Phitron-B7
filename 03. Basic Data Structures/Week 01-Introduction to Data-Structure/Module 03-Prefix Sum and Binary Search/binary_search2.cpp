#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int value;
    cin >> value;
    int flag = 0;

    // // Linear search
    // for(int i = 0; i < n; i++) {
    //     if(a[i] == value) {
    //         flag = 1;
    //     }
    // }

    // Binary search
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

    if(flag == 1) {
        cout << "Found" << endl;
    }

    else {
        cout << "Not found" << endl;
    }

    return 0;
}