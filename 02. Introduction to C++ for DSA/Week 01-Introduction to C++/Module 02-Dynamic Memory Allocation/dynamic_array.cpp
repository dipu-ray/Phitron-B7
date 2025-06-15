#include <bits/stdc++.h>
using namespace std;

int main() {
    // Static array in C++
    // int arr[5];
    // for(int i = 0; i < 5; i++) {
    //     cin >> arr[i];
    // }
    // for(int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }

    // Dynamic array in C++
    int* arr = new int[5];
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}