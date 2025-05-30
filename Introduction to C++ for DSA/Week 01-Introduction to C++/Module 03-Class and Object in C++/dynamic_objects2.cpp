#include <bits/stdc++.h>
using namespace std;

// Dynamic Objects
// class Student {
//     public:
//     int roll;
//     int cls;
//     double gpa;

//     Student(int roll, int cls, double gpa) {
//         this->roll = roll;
//         this->cls = cls;
//         this->gpa = gpa;
//     }
// };

// int main() {
//     Student rahim(40, 5, 2.5); // Static objects
//     Student* karim = new Student(2, 5, 5.00); // Dynamic objects

//     cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
//     cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

//     return 0;
// }



// Dynamic object return from function
class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun() {
    Student* karim = new Student(2, 5, 5.00);
    return karim;
}

int main() {
    Student* p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;

    return 0;
}