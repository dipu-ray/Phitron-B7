# Date: 15 April, 2025 - Tuesday

## Topics:
0. Introduction
1. What is an array Animated
2. Why we need array
3. Accessing elements of an array Animated
4. Accessing elements of an array
5. Memory management of an array
6. Array input output Animated
7. Array input and output
8. Reverse printing of an array
9. Reverse printing of an array Animated
10. Array initialization
11. Sum of all values of an array
12. Sum of all values of an array Animated
13. Summary
- Quiz: Module 07
- Extra practice problem and quiz explanation module 07
- Feedback form module 07

## 0. Introduction
- Any programming languages have 5 fundamentals topics:
    - Variables
    - Conditions
    - Loops
    - Arrays
    - Functions
- Some basic knowledge in array.

## 1. What is an array Animated
- An array is a collection of elements of the same data type stored in contiguous memory locations, and accessed using an index.

## 2. Why we need array
- Arrays are needed to store, access, and manage collections of data efficiently using indexing and loops.
- Example: `data_type array_name[size]`
- Same data type many variable or date can store

## 3. Accessing elements of an array Animated
- Index --> 0, 1, 2, 3, 4
- Variable --> ar[0], ar[1], ar[2], ar[3], ar[4]
- Memory --> 530, 534, 538, 542, 546

## 4. Accessing elements of an array
- Program: `array.c`
- Explanation this program in video

## 5. Memory management of an array
- `int x = 10;` Can be size are 4 bytes
    - `1056`
    - `1057`
    - `1058`
    - `1059`
- `int y = 20;` Can be size are 4 bytes
    - `1060`
    - `1061`
    - `1062`
    - `1063`
- `x` and `y` variable store `4 + 4 = 8 bytes`
- `a[3] = 20;`
    - `540 + (3 * 4)`
    - `540 + 12`
    - `552`

## 6. Array input output Animated
- Array using with loop
- loop start 0 when it's for array. Because, array index are 0 start.

## 7. Array input and output
- Program: `array_io.c`
- Explanation this program in video

## 8. Reverse printing of an array
- Program: `reverse_array.c`

## 9. Reverse printing of an array Animated
- Explanation `reverse_array.c` this program

## 10. Array initialization
- Program: `array_initialization.c`
- Array size of 5. You type only 3. then others 2 two index are auto 0. Then `6` number of index are `garbage` value.
- Try to yourself `array initialization`.

## 11. Sum of all values of an array
- Program: `sum_array.c`

## 12. Sum of all values of an array Animated
- Explanation `sum_array.c` this program in video

## 13. Summary
- Array fundamentals.
- Known and understand why need to array.
- Understand what is array.
- Understand how to array work.
- Understand array input output.
- Understand array initialization.
- Understand how to reverse print in array.
- Understand how to array all element are summation.

## Quiz: Module 07
- `Total Questions: 10`
- `Total Marks: 10`

## Quiz Explanation Module 07
- [Quiz Explanation Link](https://docs.google.com/document/d/1RU9Y-TJ7LsrTb3Ww90Fb5-ol51dU_lkytRYejc5tBH4/edit?usp=drivesdk)
#### 1.  What is an array in the C programming language?
**a)** A group of similar type of data elements ✅ <br>
**b)** A group of different type of data elements  
**c)** An integer  
**d)** An alien data type  
> **Explanation:** একই টাইপের অনেকগুলো ডাটা একসাথে স্টোর করে রাখার স্টোরেজকে Array বলা হয়।
---
#### 2.  Which of the following is the correct syntax for declaring an array of integers?
**a)** int arrayName[size]; ✅ <br>
**b)**  int arrayName;  
**c)** array arrayName[int];  
**d)** array arrayName[size];  
> **Explanation:** Array ডিক্লেয়ার করার নিয়মঃ  data_type Array_name [ size ]. এক্ষেত্রে integer এর array ডিক্লেয়ার এর জন্য Array এর ডাটা টাইপ হিসেবে int লিখা হয়েছে।
--- 
#### 3. What is the index number of the first element in an array in the C programming language?
**a)** 0 ✅ <br>
**b)**  1  
**c)** -1  
**d)** 2  
> **Explanation:** Array এর ইন্ডেক্সিং 0 (zero) থেকে শুরু হয়ে থাকে। তাই Array এর প্রথম ইলিমেন্ট টি এর 0 নাম্বার ইন্ডেক্সে থাকে।
---
#### 4.  What will be the output of the following C code?
    int arr[4] = {10, 20, 30, 40};
    printf("%d", arr[2]);
**a)** 0 ✅ <br>
**b)**  1  
**c)** -1  
**d)** 2  
> **Explanation:** Array এর ইন্ডেক্সিং 0 (zero) থেকে শুরু হয়ে থাকে। তাই Array এর প্রথম ইলিমেন্ট টি এর 0 নাম্বার ইন্ডেক্সে থাকে।