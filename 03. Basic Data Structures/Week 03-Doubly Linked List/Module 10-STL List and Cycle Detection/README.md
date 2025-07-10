# Date: 08 July, 2025 - Tuesday

## Topics:
- List Build-in Functions
0. Introduction
1. List Constructors
2. List Capacity functions
3. List Modifiers functions
4. List Modifiers functions II
5. List operation functions
6. List element access and iterators
7. Idea of reversing singly linked list
8. Reverse singly linked list Implementation
9. Reverse singly linked list Animated
10. Reverse Doubly linked list
11. Reverse doubly linked list Animated
12. Idea of detecting cycle in linked list
13. Detect cycle implementation
14. Detect cycle Animated.mp4
15. Summary
- Quiz: Module 10
- Quiz Explanation
- Feedback Form: Module 10

## List Build-in Functions
- [Link](https://docs.google.com/document/d/1IbS-qmFx6oRO-GyIG55yavdDUHpfHTNM/edit?usp=sharing&ouid=112433310488936743525&rtpof=true&sd=true)
- <img src="./images/image.png" width="500">
- <img src="./images/image2.png" width="500">
- <img src="./images/image3.png" width="500">
- <img src="./images/image4.png" width="500">

## 0. Introduction
- Exploring linked list with STL in C++
- STL list: A flexible container
- Mastering STL list functions
- Reversing a singly linked list
- Reversing a doubly linked list
- Detecting cycles in linked list

## 1. List Constructors
- Program: `stl_list.cpp`

## 2. List Capacity functions
- Program: `stl_list2.cpp`

## 3. List Modifiers functions
- Program: `list_modifiers.cpp`

## 4. List Modifiers functions II
- Program: `list_modifiers2.cpp`

## 5. List operation functions
- Program: `list_operations.cpp`

## 6. List element access and iterators
- Program: `list_functions.cpp`

## 7. Idea of reversing singly linked list
- This idea make will `recursion`
- <img src="./images/drawing.png" width="500">
- <img src="./images/drawing2.png" width="500">
- <img src="./images/drawing3.png" width="500">
- <img src="./images/drawing4.png" width="500">
- Now, it's perfectly to `reverse` with `recursive function`.

## 8. Reverse singly linked list Implementation
- Program: `reverse.cpp`
- Implementation this program of those four image logics.

## 9. Reverse singly linked list Animated
- Explanation this code:
    ```
    void reverse_linked_list(Node* &head, Node* &tail, Node* tmp) {
        if(tmp->next == NULL) {
            head = tmp;
            return;
        }
        reverse_linked_list(head, tail, tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
        tail = tmp;
    }
    ```

## 10. Reverse Doubly linked list
- Abc





## Quiz: Module 10
- `Total Questions: 10`
- `Total Marks: 10`

## Quiz Explanation
- [Link](https://docs.google.com/document/d/12TDWvvOyXQSB3tkcFv1eMZxhifiwCG0apN7GM1Nrz0Q/edit?usp=sharing)
#### 1. What is the purpose of a C++ list?
**a)** To store elements in a sequential order     
**c)** To store elements in a sorted order     
**b)** To store elements in a queue-like structure    
**d)** To store elements in a doubly linked-list data structure ✅  
> **Explanation:** C++ এর লিস্ট list হল একটি ডেটা স্ট্রাকচার যা ডাবলি লিঙ্কড লিস্ট (Doubly Linked List) ব্যবহার করে তৈরি। এটি এমন একটি স্ট্রাকচার যেখানে প্রতিটি নোডে দুটি লিঙ্ক থাকে - একটি পূর্ববর্তী নোডের জন্য এবং অন্যটি পরবর্তী নোডের জন্য। এটি দ্রুত ইনসারশন এবং ডিলিশনের জন্য উপযোগী।
---
#### 2. Which of the following operations can be performed on a C++ list?
**a)** Insertion and deletion at the beginning     
**c)** Insertion and deletion at the end     
**b)** Insertion and deletion at a specific position    
**d)** All of the above ✅  
> **Explanation:** C++ লিস্টে লিখিত সব অপারেশনগুলো করা যায়। এটি push_front, push_back, এবং insert এর মতো ফাংশনের মাধ্যমে করা যায়।
---
#### 3. Which function is used to insert an element at the beginning of a C++ list?
**a)** push_back()     
**c)** push_front() ✅   
**b)** front()    
**d)** add()   
> **Explanation:** push_front() ফাংশনটি একটি এলিমেন্টকে লিস্টের শুরুতে যোগ করার জন্য ব্যবহৃত হয়। এটি O(1) সময়ে কাজ করে কারণ এটি সরাসরি শুরুতে ডাটা যোগ করে।
---







## Feedback Form: Module 10
- মডিউল রিলেটেড তোমার যে কোন ফিডব্যাক থাকলে এই ফর্মে লিখে দিতে পারো। আমরা তোমার ফিডব্যাক গুরুত্বসহকার দেখব।
- [Form Links](https://forms.gle/DH5mjuGD1x2EZ4z29)