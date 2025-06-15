// // Sort with shortcut way and marks when are both equal
// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//     string name;
//     int roll;
//     int marks;
// };

// // Both are equal solution
// bool cmp(Student l, Student r) {
//     if(l.marks > r.marks) {
//         return true;
//     }

//     else if(l.marks < r.marks) {
//         return false;
//     }

//     else {
//         if(l.roll < r.roll) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }
// }

// // Sort with descending order
// int main() {
//     int n;
//     cin >> n;
//     Student a[n];
//     for(int i = 0; i < n; i++) {
//         cin >> a[i].name >> a[i].roll >> a[i].marks;
//     }

//     sort(a, a+n, cmp);
//     for(int i = 0; i < n; i++) {
//         cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
//     }

//     return 0;
// }





// // Sort with shortcut way and marks when are both equal
// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//     string name;
//     int roll;
//     int marks;
// };

// // Both are equal solution with shortcut way
// bool cmp(Student l, Student r) {
//     if(l.marks == r.marks) {
//         return l.roll < r.roll;
//     }
//     else {
//         return l.marks > r.marks;
//     }
// }

// // Sort with descending order
// int main() {
//     int n;
//     cin >> n;
//     Student a[n];
//     for(int i = 0; i < n; i++) {
//         cin >> a[i].name >> a[i].roll >> a[i].marks;
//     }

//     sort(a, a+n, cmp);
//     for(int i = 0; i < n; i++) {
//         cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
//     }

//     return 0;
// }





// Use to ternary operator and make it more shortcut
#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
};

// Use to ternary operator
bool cmp(Student l, Student r) {
    return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;
}

// Sort with descending order
int main() {
    int n;
    cin >> n;
    Student a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}