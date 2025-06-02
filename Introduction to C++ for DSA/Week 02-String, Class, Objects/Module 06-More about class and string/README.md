# Date: 01 June, 2025 - Sunday

## Topics:
0. Introduction
1. String Constructor
2. Sort string using sort() function
3. Range based for loop
4. Reverse function in C++
5. Reverse word codeforces solution
6. Function inside class
7. Function inside class Animated
8. Copy dynamic object
9. Copy dynamic object Animated
10. Summary
- Quiz: Module 06
- Extra Practice Problem and Quiz Explanation Module 06
- Feedback Form Module 06

## 0. Introduction
- Repeat and explore string and class
- Understanding to `string constructor`
- Understanding to `sorting string`
- Understanding to `range-based for loop`
- Understanding to `reverse word printing`
- Understanding to `functions inside classes`
- Understanding to `copying dynamic object`

## 1. String Constructor
- Program: `string_constructor.cpp`

## 2. Sort string using sort() function
- Program: `sort_string.cpp`

## 3. Range based for loop
- Program: `range_based.cpp`

## 4. Reverse function in C++
- Program: `reverse_functions.cpp`

## 5. Reverse word codeforces solution
- Program: `reverse_words.cpp`

## 6. Function inside class
- Program: `function_class.cpp`

## 7. Function inside class Animated
- Explanation to this code:
    ```
    #include <bits/stdc++.h>
    using namespace std;

    class Student {
        public:
        string name;
        int roll;

        Student(string name, int roll) {
            this->name = name;
            this->roll = roll;
        }

        void hello() {
            cout << "Hello from " << name << endl;
        }
    };

    int main() {
        Student sakib("Sakib Ahmed", 5);
        cout << sakib.name << endl;
        sakib.hello();
        Student rakib("Rakib Ahmed", 5);
        rakib.hello();

        return 0;
    }
    ```