# Date: 27 May, 2025 - Tuesday

## Topics:
- C++ Header File Error Solution for Mac (Optional)
0. Introduction
1. What is Class and Object
2. How to declare class and object
3. Working with class and object
4. Class and Object Animated
5. Constructor and its Simulation
6. This keyword and Arrow sign
7. Return object from function
8. Why we need dynamic object
9. Dynamic Object
10. Sort function in C++
11. Summary
- Quiz: Module 03
- Extra Problem, Quiz Explanation and Feedback Form

## C++ Header File Error Solution for Mac (Optional)
- [Docs Link](https://docs.google.com/document/d/1Q7sNB0N9uhZVQl4rgeCbDK01u8xs64yhJcUPc_WQ22Q/edit?usp=sharing)
- C++ Header File Error Solution for Mac [Video](https://tinyurl.com/3epfv9ks)
- অল্টারনেটিভ সল্যুশনঃ
    - Make a custom snippet
        - VS কোডে কাস্টম স্নিপিট কীভাবে বানাবেনঃ [Link](https://tinyurl.com/vwscmrne)
        - স্নিপিট জেনেরেটরে বাম পাশে আপনি যেই কোডটি পেস্ট করবেনঃ [Link](https://ideone.com/XFKnm1)
- Snippet:
    ```
        #include <iostream>
        #include <string>
        #include <vector>
        #include <algorithm>
        #include <sstream>
        #include <queue>
        #include <deque>
        #include <bitset>
        #include <iterator>
        #include <list>
        #include <stack>
        #include <map>
        #include <set>
        #include <functional>
        #include <numeric>
        #include <utility>
        #include <limits>
        #include <time.h>
        #include <math.h>
        #include <stdio.h>
        #include <string.h>
        #include <stdlib.h>
        #include <assert.h>
        using namespace std;

        int main() {
            return 0;
        }
    ```

## 0. Introduction
- What is Class in C++
- What is an Object in C++
- Class and Object are basically OOP concept.
- We need to some data group wise for Class and Object concept.
- How to create Classes and Objects
- Understanding Constructors in C++
- How to create a Dynamic Objects
- Using sort() function for array sorting in C++

## 1. What is Class and Object
- Class - `There have so many datatype include. Likes: name, roll, section, gpa etc.`
- Object - `Build-in datatype call to variable and user-define datatype call to Object.`
- There have two type of datatype:
    - Build-in Datatype. `Variable`
    - User-define Datatype. `Object`

## 2. How to declare class and object
- Class structure are:
    ```
    class Student {
        Access Modifier
    };
    ```
    - Access modifier has 3 types:
        - Private
        - Protected
        - Public ✅
- We are using `Public access modifier`
    ```
    class Student {
            public:
                char name[100];
                int roll;
                char section;
                double gpa;
        };
    ```
- We need to this class a make a object. Then structure:
    ```
    int main() {
        Student x;
    }
    // Student are class and x is variable. "Student x = Object"
    ```

## 3. Working with class and object
- Program: `class_object.cpp`

## 4. Class and Object Animated
- abc