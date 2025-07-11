# Date: 06 July, 2025 - Sunday

## Topics:
- Text Instruction: Module 09 [Must Read]
0. Introduction
1. Doubly linked list
2. Printing Doubly Linked list
3. Doubly linked list Animated
4. Insert at head Animated
5. Insert at head
6. Insert at tail Animated
7. Insert at tail
8. Insert at any position Animated
9. Insert at any position
10. Delete at head Animated
11. Delete at head
12. Delete at tail Animated
13. Delete at Tail
14. Delete at any position Animated
15. Delete at any position
16. Complexity Analysis of Array vs Singly vs Doubly
17. Input Doubly linked list
18. Summary
- Quiz: Module 09
- Quiz Explanation
- Feedback Form: Module 09

## Text Instruction: Module 09 [Must Read]
- প্রিভিয়াস উইক ছিলো সিঙ্গলি লিংকড লিস্টের উপর। তোমাদের মোটামুটি সিঙ্গলি লিংকড লিস্ট সম্পর্কে কোর কন্সেপ্টগুলো শেখানো হয়েছিলো। আজ শুরু হচ্ছে নতুন আরেকটি উইক। রিলিজ হচ্ছে এই উইকের প্রথম মডিউল, মডিউল ০৯। আজকের মডিউলে আরো একটা লিংকড লিস্ট তোমাদের শেখানো হবে। সো গায়ের সব জড়তা ভেঙে আবারো চলে আসো প্রোগ্রামিং এর ময়দানে।
- আজকে তোমাদের শেখানো হবে ডাবলি লিংড লিস্ট। ডাবলি লিংকড লিস্ট কিভাবে ডিক্লেয়ার করতে হয়। কিভাবে ইনপুট নিতে হয়, আউটপুট দেখাতে হয় এবং এর বেসিক অপারেশন গুলো স্টেপ বাই স্টেপ তোমাদের শেখানো হবে। সাথে কপ্লেক্সিটিও বুঝিয়ে দেওয়া হবে।
- প্রতি সপ্তাহে মাত্র তিনদিন তোমাদের এরকম লেকচার মডিউল গুলো আসে। সো তোমরা ইউটিলাইজ করতে পারলে এনাফ টাইম কিন্তু পাবে। একটু ভেবে দেখো কোথায় কোথায় তোমাদের মূল্যবান সময়গুলো অথযা ব্যয় হচ্ছে। সেগুলো কাট করে কোর্সের মডিউলগুলো আরো ভালোভাবে প্র্যাক্টিস করার জন্য দাও।
- [Comparison of all operation's complexity -](https://docs.google.com/document/d/1McYLCx7BcrMBsqTCuioWK2FnopEBgXzG1B35Hfwlfzk/edit?usp=sharing)
- <img src="./images/notes.png" width="500">

## 0. Introduction
- Doubly Linked List Operations:
    - `Insertion`:
        - at head
        - at tail
        - at any position
    - `Deletion`:
        - at head
        - at tail
        - at any position
    - `Printing`:
        - forward
        - backward
    - `Input`
        - Array vs Singly vs Doubly

## 1. Doubly linked list
- Doubly linked list can go to the `backward and forward` that means `two connections`. That's why call to `doubly linked list`.
- Doubly linked list logic:
- <img src="./images/draw.png" width="500">
- Program: `doubly.cpp`

## 2. Printing Doubly Linked list
- Program: `doubly_printing.cpp`
- Printing a doubly linked list with `forward and backward`.
- Condition Logic:
    ```
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->previous;
    }
    ```
- <img src="./images/draw2.png" width="500">

## 3. Doubly linked list Animated
- Explanation this program:
    ```
    int main() {
        Node* head = new Node(10);
        Node* a = new Node(20);
        Node* b = new Node(30);

        head->next = a;
        a->previous = head;

        a->next = b;
        b->previous = a;

        return 0;
    }
    ```

## 4. Insert at head Animated
- Let's start the `insertion operations`
- `Insertion at head`
- Explanation with animated how to `insert at head`
- <img src="./images/draw3.png" width="500">

## 5. Insert at head
- Build program with the previous logics - `insertion at head`
- Program: `insert_head.cpp`

## 6. Insert at tail Animated
- `Insertion at tail`
- Explanation with animated how to `insert at tail`
- <img src="./images/draw4.png" width="500">

## 7. Insert at tail
- Build program with the previous logics - `insert at tail`
- Program: `insert_tail.cpp`

## 8. Insert at any position Animated
- `Insertion at any position`
- Explanation with animated how to `insert at any position`
- <img src="./images/draw5.png" width="500">

## 9. Insert at any position
- `any position` that's means head and tail without `any position`.
- Build program with this logics:
    - <img src="./images/draw6.png" width="500">
    - <img src="./images/draw7.png" width="500">
    - <img src="./images/draw8.png" width="500">
    - `Skip that big "after" in image`
- Program: `insert_any_position.cpp`

## 10. Delete at head Animated
- `Delete at head`
- Explanation with animated how to `delete at head`
- <img src="./images/draw9.png" width="500">

## 11. Delete at head
- Build program with this logics and how to connection to each others:
    - <img src="./images/draw10.png" width="500">
    - <img src="./images/draw11.png" width="500">
    - <img src="./images/draw12.png" width="500">
- Program: `delete_head.cpp`

## 12. Delete at tail Animated
- `Delete at tail`
- Explanation with animated how to `delete at tail`
- <img src="./images/draw13.png" width="500">

## 13. Delete at Tail
- Build program with this logics and how to connection to each others:
    - <img src="./images/draw14.png" width="500">
    - <img src="./images/draw15.png" width="500">
    - <img src="./images/draw16.png" width="500">
    - <img src="./images/draw17.png" width="500">
    - <img src="./images/draw18.png" width="500">
- Program: `delete_tail.cpp`
- `delete at tail in doubly linked list` time complexity of O(1). Because of, there was no loops and easily can move on backward.
- `delete at tail in singly linked list` time complexity of O(N). Because of, there was using with loops and can't move on backward.

## 14. Delete at any position Animated
- `Delete at any position`
- Explanation with animated how to `delete at any position`
- <img src="./images/draw19.png" width="500">

## 15. Delete at any position
- Build program with this logics and how to connection to each others:
    - <img src="./images/draw20.png" width="500">
    - <img src="./images/draw21.png" width="500">
    - <img src="./images/draw22.png" width="500">
    - <img src="./images/draw23.png" width="500">
    - <img src="./images/draw24.png" width="500">
- Program: `delete_any_position.cpp`

## 16. Complexity Analysis of Array vs Singly vs Doubly
- <img src="./images/notes.png" width="500">
- `Array` one time better than `singly linked list` - `Delete at Tail` in time complexity.
- Others time always best to time complexity `Doubly Linked List`.

## 17. Input Doubly linked list
- Program: `input_doubly.cpp`
- Same to same also `singly linked list input` and `doubly linked list input`

## 18. Summary
- What is `doubly linked list` and how they work?
- Doubly linked can print `backward` and `forward`.
- Doubly linked list operations:
    - `insert at head`
    - `insert at tail`
    - `insert at any position`
    - `delete at head`
    - `delete at tail`
    - `delete at any position`
- How to `input from user` in `doubly linked list`.
- This whole operations `time complexity` comparison.

## Quiz: Module 09
- `Total Questions: 10`
- `Total Marks: 10`

## Quiz Explanation
- [Link](https://docs.google.com/document/d/1gbo1Mm3fn2PRe4ciyq3JaFP6VCOSKoDGaFlb-WwuqY8/edit?usp=sharing)
#### 1. Which of the following statements is true about a doubly linked list?
**a)** It can only be traversed in one direction.     
**b)** It can be traversed in both directions. ✅   
**c)** It can only store integers.     
**d)** It has a fixed size.   
> **Explanation:** Doubly Linked List একটি বিশেষ লিংকড লিস্ট যেখানে প্রতিটি নোডে দুইটি পয়েন্টার থাকে: <br>
একটি আগের নোডে (prev) নির্দেশ করে। <br>
অন্যটি পরবর্তী নোডে (next) নির্দেশ করে। <br>
এই কারণে ডাবলি লিংকড লিস্ট উভয় দিক থেকে ট্রাভার্স করা সম্ভব হয়। এটি integer ছাড়াও যেকোনো ডেটা টাইপ ধারণ করতে পারে এবং এর সাইজ fixed নয়।
---
#### 2. In a doubly linked list, which pointer of the last node is NULL?
**a)** prev     
**b)** next ✅   
**c)** both prev and next     
**d)** none of the above   
> **Explanation:** Doubly Linked List  এ শেষ নোডের পরে কোনো নোড থাকে না। তাই শেষ নোডের next পয়েন্টারটি NULL সেট করা হয়। তবে prev পয়েন্টারটি শেষ নোডের আগের নোডকে নির্দেশ করে।
---
#### 3. In a doubly linked list, each node contains:
**a)** Only a link to the next node.     
**b)** Only a link to the previous node.    
**c)** Both a link to the next and previous nodes. ✅     
**d)** A link to the first node in the list.   
> **Explanation:** Doubly Linked List  এ  প্রতিটি নোডে দুটি পয়েন্টার থাকে: <br>
prev: আগের নোড নির্দেশ করে। <br>
next: পরবর্তী নোড নির্দেশ করে। <br>
এই কারণে Doubly Linked List  এ  উভয় দিক থেকে ট্রাভার্স করা যায় এবং বিভিন্ন অপারেশন সহজ হয়।
---
#### 4. Which of the following is the time complexity for inserting a node at the beginning of a doubly linked list?
**a)** O(1) ✅     
**b)** O(n)    
**c)** O(logn)      
**d)** O(n^2)   
> **Explanation:** Doubly Linked List  এ insertion এর সময় head পয়েন্টারকে নতুন নোডের দিকে point করা হয় এবং নতুন নোডের next পয়েন্টার পুরানো head-এর দিকে সেট করা হয়। এই অপারেশনটি constant time-এ সম্পন্ন হয়। তাই টাইম কমপ্লেক্সিটি O(1)।
---
#### 5. Deleting the last node in a doubly linked list takes:
**a)** O(1) time ✅     
**b)** O(n) time    
**c)** O(logn) time       
**d)** O(n^2) time    
> **Explanation:** Doubly Linked List  এ  শেষ নোডে সরাসরি অ্যাক্সেস করা সম্ভব যদি আমাদের কাছে tail pointer থাকে। prev পয়েন্টার ব্যবহার করে এর আগের নোডের next পয়েন্টারটি NULL সেট করে, এবং শেষ নোডটি মুছে ফেলা হয়। এটি constant time-এ করা যায়, তাই টাইম কমপ্লেক্সিটি O(1)।
---
#### 6. Which of the following is the correct way to check if a doubly linked list is empty?
**a)** Check if the head is null      
**b)** Check if the tail is null    
**c)** Both a and b ✅       
**d)** Check if both the head and tail are non-null    
> **Explanation:** Doubly Linked List   খালি হলে head এবং tail পয়েন্টার NULL হবে।
---
#### 7. The process of inserting a new node after a specific node in a doubly linked list involves:
**a)** Changing the link of the previous node      
**b)** Changing the link of the next node    
**c)** Changing the links of both the previous and next nodes ✅       
**d)** No change in the links of other nodes    
> **Explanation:** একটি নির্দিষ্ট নোডের পরে নতুন নোড যোগ করার জন্য: <br>
নতুন নোডের prev বর্তমান নোডের দিকে সেট করা হয়। <br>
নতুন নোডের next বর্তমান নোডের পরবর্তী নোডের দিকে সেট করা হয়। <br>
বর্তমান নোডের next এবং পরবর্তী নোডের prev নতুন নোডের দিকে সেট করা হয়। <br>
---
#### 8. Which of the following is not an advantage of using a doubly linked list over a singly linked list?
**a)** Can be traversed in both directions      
**b)** Supports efficient insertion and deletion at the beginning    
**c)** Requires less memory space ✅       
**d)** Allows easy removal of a node without traversing the entire list    
> **Explanation:** Doubly Linked List  এর প্রতিটি নোডে দুটি পয়েন্টার থাকে (prev এবং next), যা অতিরিক্ত মেমরি দখল করে। এই কারণে এটি singly linked list থেকে বেশি মেমরি ব্যবহার করে।
---
#### 9. The process of inserting a new node at the end of a doubly linked list involves:
**a)** Insert new node before the tail node      
**b)** Insert new node after the tail node ✅    
**c)** Insert new node before the head node        
**d)** No change in the links of other nodes    
> **Explanation:** নতুন নোড tail পয়েন্টারের পরে ইনসার্ট করা হয় এবং tail pointer নতুন নোডের দিকে নির্দেশ করা হয়।
---
#### 10. The process of deleting a node from a doubly linked list involves:
**a)** Changing the link of the previous node      
**b)** Changing the link of the next node     
**c)** Changing the links of both the previous and next nodes ✅       
**d)** No change in the links of other nodes    
> **Explanation:** ডাবলি লিংকড লিস্টে একটি নোড মুছে ফেলার জন্য: <br>
prev পয়েন্টার পরিবর্তন করে আগের নোডকে পরবর্তী নোডের সাথে যুক্ত করা হয়।
next পয়েন্টার পরিবর্তন করে পরবর্তী নোডকে আগের নোডের সাথে যুক্ত করা হয়।
অবশেষে নির্দিষ্ট নোডটি ডিলিট করা হয়।
---

## Feedback Form: Module 09
- মডিউল রিলেটেড তোমার যে কোন ফিডব্যাক থাকলে এই ফর্মে লিখে দিতে পারো। আমরা তোমার ফিডব্যাক গুরুত্বসহকার দেখব।
- [Form Links](https://forms.gle/DH5mjuGD1x2EZ4z29)