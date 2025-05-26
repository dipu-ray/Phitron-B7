#include <iostream>
using namespace std;

int main() {
    // char s[100];
    // // cin >> s; // Input: Hello world And Output: Hello
    // cin.getline(s, 100); // Input: Hello world And Output: Hello world
    // cout << s <<endl;

    // Make a problem like this program with .getline
    // int x;
    // cin >> x;
    // char s[100];
    // cin.getline(s, 100);
    // cout << x << endl << s << endl; // Output: X_value

    // This problem solve it using with cin.ignore()
    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    cin.getline(s, 100);
    cout << x << endl << s << endl; // Output: X_value
    return 0;
}