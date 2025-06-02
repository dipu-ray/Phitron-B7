#include <bits/stdc++.h>
using namespace std;

// class Student {
//     public:
//     string name;
//     int roll;

//     Student(string name, int roll) {
//         this->name = name;
//         this->roll = roll;
//     }

//     void hello() {
//         cout << "Hello from " << name << endl;
//     }
// };

// int main() {
//     Student sakib("Sakib Ahmed", 5);
//     cout << sakib.name << endl;
//     sakib.hello();
//     Student rakib("Rakib Ahmed", 5);
//     rakib.hello();

//     return 0;
// }



// Total marks find from a student
class Student {
    public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english) {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total_marks() {
        cout << "Total marks of " << name << " = " << math+english << endl;
    }
};

int main() {
    Student sakib("Sakib Ahmed", 5, 80, 90);
    cout << sakib.name << endl;
    sakib.total_marks();
    Student rakib("Rakib Ahmed", 5, 90, 80);
    rakib.total_marks();

    return 0;
}