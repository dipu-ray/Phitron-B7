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
- Explain this `Classes` and `Objects`

## 5. Constructor and its Simulation
- Program: `constructor.cpp`
- Multiple classes shortcut is `Constructor`. `Constructor` it's a function but it's a special type of function.
- Constructor three properties:
    1. It's have or work into classes
    2. Constructor don't have a return type
    3. Constructor name is classes name
- Example:
    ```
    class Student {
        public:
        int roll;
        int cls;
        double gpa;

        // This is a Constructor
        Student() {
            // code
        }
    };
    ```

## 6. This keyword and Arrow sign
- Program: `keywords.cpp`
- `(*this).roll = roll;` - Full Form
- `this->roll = roll;` - Short Form

## 7. Return object from function
- Program: `object_return.cpp`

## 8. Why we need dynamic object
- Program: `dynamic_objects.cpp`
- This `dynamic_objects.cpp` program have output a gerbase value. Because of, static value have always auto clear or delete. That's why value not found output have a gerbase value.

## 9. Dynamic Object
- Program: `dynamic_objects2.cpp`
- Normally return a static array or object can find the value but return with pointer then static object can't find the value.
- Dynamic object find the value with function return.

## 10. Sort function in C++
- Program: `sort_function.cpp`
- How to declares sort function. The syntax:
    - `sort(starting, ending+1);`

## 11. Summary
- Understand how to classes work and objects
- Understand constructor in C++
- Understand this keyword and arrow sign in C++
- Understand object return from function in C++
- Understand static object and dynamic object in C++
- Understand sorting function, ascending and descending in C++

## Quiz: Module 03
- `Total Questions: 10`
- `Total Marks: 10`

## Quiz Explanation Module 03
- [Extra Problem:](https://docs.google.com/document/d/1oLbtTi1yfjVRUQTt-wwqSPOFuF3MDBR_bkKcDSXp2_Y/edit?usp=sharing)
    - [Problem 1](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J)
    - [Problem 2](https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N)
    - [Problem 3](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M)

- [Quiz Explanation Link](https://docs.google.com/document/d/1yxy2CtbyJeb0Y2GekZl5ksC5Jk7BA-WtuGsToUaHFAk/edit?usp=sharing)
#### 1. Which keyword is used to declare a class in C++?
**a)** class ✅    
**b)** struct   
**c)** object   
**d)** cls  
> **Explanation:** C++-এ class কিওয়ার্ড ব্যবহার করে একটি ক্লাস ডিক্লেয়ার করা হয়। একটি ক্লাস হলো অবজেক্ট-ওরিয়েন্টেড প্রোগ্রামিংয়ের (OOP) মূল ধারণা, যা ডেটা এবং ফাংশনগুলোকে একত্রে সংরক্ষন করে।
---
#### 2. Which access modifier will we use as the module says?
**a)** private     
**b)** protected   
**c)** public ✅   
**d)** static  
> **Explanation:** C++-এ public অ্যাক্সেস মডিফায়ার ব্যবহার করে ক্লাসের মেম্বারগুলোকে বাইরের কোড থেকে অ্যাক্সেসযোগ্য করা হয়।
---
#### 3. Which keyword is used to create a dynamic object of a class in C++?
**a)** class     
**b)** new ✅    
**c)** object    
**d)** create  
> **Explanation:** new কিওয়ার্ড C++-এ ডাইনামিক মেমোরি বরাদ্দ করার জন্য ব্যবহৃত হয়। এটি ক্লাসের ডাইনামিক অবজেক্ট তৈরি করতেও ব্যবহৃত হয়।
---
#### 4. Which operator is used to access the members of a static object in C++?
**a)** ->     
**b)** . ✅    
**c)** ::    
**d)** :  
> **Explanation:** স্ট্যাটিক অবজেক্টের মেম্বার অ্যাক্সেস করার জন্য ডট (.) অপারেটর ব্যবহার করা হয়।  -> এটি ডাইনামিক অবজেক্টের জন্য ব্যবহৃত হয়।
---
#### 5. Which operator is used to access the members of a dynamic object in C++?
**a)** -> ✅     
**b)** .     
**c)** ::    
**d)** :  
> **Explanation:** ডাইনামিক অবজেক্টের মেম্বার অ্যাক্সেস করার জন্য অ্যারো (->) অপারেটর ব্যবহৃত হয়।
---
#### 6. What is the size of an empty object in C++?
**a)** 0 byte      
**b)** 4 bytes     
**c)** 8 bytes    
**d)** It can vary, but minimum 1 byte is required. ✅  
> **Explanation:** C++-এ একটি খালি অবজেক্টের আকার কমপক্ষে ১ বাইট হতে হবে। কারণ এটি অবজেক্টের জন্য একটি অ্যাড্রেস প্রদান করে।
---
#### 7. Which function is automatically called when an object is created?
**a)** main()      
**b)** start()     
**c)** constructor ✅    
**d)** destructor   
> **Explanation:** ক্লাসের অবজেক্ট তৈরি হলে স্বয়ংক্রিয়ভাবে constructor ফাংশন কল হয়। এটি সাধারণত অবজেক্টের প্রাথমিককরণে ব্যবহৃত হয়।
---
#### 8. How to sort an array of integers named ar of size N in ascending order using sort function?
**a)** sort(a,a+N)      
**b)** sort(ar,ar+5)     
**c)** sort(ar+N,ar)     
**d)** sort(ar,ar+N) ✅   
> **Explanation:** sort(ar, ar+N) C++ STL ফাংশন ব্যবহার করে একটি অ্যারে ar এর প্রথম এবং শেষ ইন্ডেক্সের মধ্যে উপাদানগুলোকে ascending অর্ডারে সাজায়।
---
#### 9. How to sort an array of integers named ar of size N in descending order using sort function?
**a)** `sort(ar,ar+N,greater<int>)`      
**b)** `sort(ar,ar+N,greater<double>)`     
**c)** `sort(ar,ar+N,greater<int>())` ✅     
**d)** `sort(ar,ar+N,greater<double>())`    
> **Explanation:** Descending অর্ডারে সাজানোর জন্য sort ফাংশনের সাথে `greater<int>()` ফাংশন পাস করতে হয়।
---
#### 10. What is the name of this operator (->) in c++?
**a)** narrow      
**b)** hyphen and angle bracket     
**c)** arrow ✅     
**d)** right angle bracket    
> **Explanation:** অপারেটরকে arrow operator বলা হয়। এটি ডাইনামিক অবজেক্ট বা পয়েন্টার থেকে মেম্বার অ্যাক্সেস করার জন্য ব্যবহৃত হয়।
---

## Feedback Form Module 03
- মডিউল রিলেটেড তোমার যে কোন ফিডব্যাক থাকলে এই ফর্মে লিখে দিতে পারো। আমরা তোমার ফিডব্যাক গুরুত্বসহকার দেখব।
- [Form Links](https://forms.gle/DH5mjuGD1x2EZ4z29)