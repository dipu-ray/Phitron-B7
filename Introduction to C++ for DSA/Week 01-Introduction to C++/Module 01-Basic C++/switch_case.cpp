#include <iostream>
using namespace std;

int main() {
    // Example 1
    // int day;
    // cin >> day;
    // switch(day) {
    //     case 1:
    //         cout << "Saturday\n";
    //         break;
    //     case 2:
    //         cout << "Sunday\n";
    //         break;
    //     case 3:
    //         cout << "Monday\n";
    //         break;
    //     case 4:
    //         cout << "Tuesday\n";
    //         break;
    //     case 5:
    //         cout << "Wednesday";
    //         break;
    //     case 6:
    //         cout << "Thursday\n";
    //         break;
    //     case 7:
    //         cout << "Friday\n";
    //         break;
    //     default:
    //         cout << "Wrong input! Enter correct value.\n";
    // }

    // Example 2
    // int x;
    // cin >> x;
    // switch(x%2) {
    //     case 0:
    //         cout << "Even\n";
    //         break;
    //     case 1:
    //         cout << "Odd\n";
    //         break;
    // }

    // Example 3
    char c;
    cin >> c;
    switch(c) {
        case 'a':
            cout << "Vowel\n";
            break;
        case 'e':
            cout << "Vowel\n";
            break;
        case 'i':
            cout << "Vowel\n";
            break;
        case 'o':
            cout << "Vowel\n";
            break;
        case 'u':
            cout << "Vowel\n";
            break;
        default:
            cout << "Consonant\n";
    }
    return 0;
}