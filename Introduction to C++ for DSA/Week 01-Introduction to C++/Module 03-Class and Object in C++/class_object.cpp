#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        char name[100];
        int roll;
        double gpa;
};

// Normal input not from user input
// int main() {
//     Student a;
//     a.roll = 549034;
//     a.gpa = 3.40;

//     char temp[100] = "Siyam";
//     strcpy(a.name, temp);

//     cout << a.name << a.roll << a.gpa << endl;

//     return 0;
// }



// // From user input and name without space
// int main() {
//     Student a, b;
//     cin >> a.name >> a.roll >> a.gpa;
//     cin >> b.name >> b.roll >> b.gpa;

//     cout << a.name << " " << a.roll << " " << a.gpa << endl;
//     cout << b.name << " " << b.roll << " " << b.gpa << endl;

// }



// From user input and name with space
int main() {
    Student a, b;

    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;

    cin.ignore();

    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

}