// // Sort with marks and sort with descending order
// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//     string name;
//     int roll;
//     int marks;
// };

// // Sort with marks
// bool cmp(Student l, Student r) {
//     if(l.marks > r.marks) {
//         return true;
//     }
//     else {
//         return false;
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





// // Sort with roll and sort with ascending order
// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//     string name;
//     int roll;
//     int marks;
// };

// // Sort with roll
// bool cmp(Student l, Student r) {
//     if(l.roll < r.roll) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

// // Sort with ascending order
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





// // Sort with shortcut way and sort with ascending order
// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//     string name;
//     int roll;
//     int marks;
// };

// // The shortcut way with roll
// bool cmp(Student l, Student r) {
//     return l.roll < r.roll;
// }

// // Sort with ascending order
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





// // Sort with shortcut way and sort with descending order
// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//     string name;
//     int roll;
//     int marks;
// };

// // The shortcut way with marks
// bool cmp(Student l, Student r) {
//     return l.marks < r.marks;
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





// Sort with shortcut way and marks when are both equal
#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
};

// This is not properly done. Next program it will done.
bool cmp(Student l, Student r) {
    if(l.marks >= r.marks) {
        return true;
    }
    else {
        return false;
    }
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