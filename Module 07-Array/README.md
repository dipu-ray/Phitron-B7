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
**a)** int arrayName[size]; ✅  
**b)** int arrayName;  
**c)** array arrayName[int];  
**d)** array arrayName[size];  
> **Explanation:** Array ডিক্লেয়ার করার নিয়মঃ  data_type Array_name [ size ]. এক্ষেত্রে integer এর array ডিক্লেয়ার এর জন্য Array এর ডাটা টাইপ হিসেবে int লিখা হয়েছে।
--- 
#### 3. What is the index number of the first element in an array in the C programming language?
**a)** 0 ✅  
**b)** 1  
**c)** -1  
**d)** 2  
> **Explanation:** Array এর ইন্ডেক্সিং 0 (zero) থেকে শুরু হয়ে থাকে। তাই Array এর প্রথম ইলিমেন্ট টি এর 0 নাম্বার ইন্ডেক্সে থাকে।
---
#### 4.  What will be the output of the following C code?
    int arr[4] = {10, 20, 30, 40};
    printf("%d", arr[2]);
**a)** 10   
**b)** 20  
**c)** 30 ✅  
**d)** 50  
> **Explanation:** উক্ত কোডে একটি 4 সাইজের Array ডিক্লেয়ার করা হয়েছে। যার , <br>
০ নাম্বার ইন্ডেক্সে আছে 10 <br>
1 নাম্বার ইন্ডেক্সে আছে 20 <br>
2 নাম্বার ইন্ডেক্সে আছে 30 <br>
3 নাম্বার ইন্ডেক্সে আছে 40 <br>
সুতারাং arr[2] অর্থাৎ 2 নাম্বার ইন্ডেক্সে ভ্যালু আছে 30।
---
#### 5. How do you access the nth element of an array in the C programming language?
**a)** arrayName[n]    
**b)** arrayName[n-1] ✅  
**c)** arrayName[n+1]  
**d)** arrayName[n*2]  
> **Explanation:** Array এর ইন্ডেক্সিং 0 (zero) থেকে শুরু হয়ে থাকে। তাই Array এর প্রথম ইলিমেন্ট টি এর 0 নাম্বার ইন্ডেক্সে থাকে এবং শেষের ইন্ডেক্স থাকে size-1 নাম্বার ইন্ডেক্সে. সুতারাং , n সাইজের একটি array এর n তম ইলিমেন্ট এক্সেস করতে হবে arrayName[n-1] এইভাবে।
---
#### 6. How do you assign a value to an element of an array in the C programming language?
**a)** arrayName[index] = value; ✅  
**b)** arrayName.value(index);    
**c)** arrayName(index) = value;  
**d)** value.arrayName(index);  
> **Explanation:** Array এর প্রত্যেকটি ইন্ডেক্স আলাদা আলাদা ভাবে এক একটি ভ্যারিয়েবলের মতো কাজ করে , তাই সাধারণ ভ্যারিয়েবলের মতোই Array এর ভ্যারিয়েবল গুলো এক্সেস করতে হয় এবং মান এসাইন করা হয়ে থাকে।  Array তে কোনো index এক্সেস করতে হয় এইভাবে arrayName[index]. এরপর = ( equal ) ব্যবহার করে মান এসাইন করা যায়।
---
#### 7. What is the purpose of the for loop in C programming language when working with arrays?
**a)** To initialize the array   
**b)** To declare the array    
**c)** To iterate over the array ✅  
**d)** To delete the array  
> **Explanation:** Array এর ক্ষেত্রে index এর মাধ্যমে এর ভ্যালু এক্সেস করতে হয়। index গুলো 0 , 1 ,2… n-1 এইভাবে হয়ে থাকে। তাই প্রত্যেকটি index এর ভ্যালু এক্সেস করার জন্য আমরা 0 থেকে লুপ চালাতে পারি।
---
#### 8. What is the index number of the last element of an array with 5 elements?
**a)** 5   
**b)** 4 ✅    
**c)** 0   
**d)** 6  
> **Explanation:** Array এর ক্ষেত্রে index এর মাধ্যমে এর ভ্যালু এক্সেস করতে হয়। index গুলো 0 , 1 ,2… n-1 এইভাবে হয়ে থাকে। তাই প্রত্যেকটি index এর ভ্যালু এক্সেস করার জন্য আমরা 0 থেকে লুপ চালাতে পারি।
---
#### 9. What is the output of the following code? Suppose this part is inside the main function.
    int arrayName[5] = {1, 2, 3,4,5};
    int sum =0 ;
    for(int i =0 ; i <3 ;i++ ) {
        sum+= arrayName[i] ;
    }
    printf(“%d”,sum) ;

**a)** 15   
**b)** 6 ✅    
**c)** 10   
**d)** 0  
> **Explanation:** উক্ত Array টির ০ থেকে শুরু করে ২ ( i <3 )  নাম্বার ইন্ডেক্স এর ভ্যালু গুলোর summation বের করা হয়েছে।  <br>
০ নাম্বার ইন্ডেক্সে আছে 1 <br>
1 নাম্বার ইন্ডেক্সে আছে 2 <br>
 2 নাম্বার ইন্ডেক্সে আছে  3 <br>
সুতারাং , sum = 1 + 2 + 3 = 6 <br>
---
#### 10. What is the output of the following code? Suppose this part is inside the main function.
    int arrayName[5] = {1, 2, 3};
    printf("%d", arrayName[4]);
**a)** 1   
**b)** 2     
**c)** 3   
**d)** 0 ✅  
> **Explanation:** মডিউল অনুসারে , array initialization এর সময় কোনো ইন্ডেক্স এর ভ্যালু এসাইন না করলে  ঐসব ইন্ডেক্স গুলোতে ০ দিয়ে initially ইনিশিয়ালাইজ হয়ে যায়।
---

## Extra Practice Problem (Optional):
- [Extra Practice Problem Link](https://docs.google.com/document/d/1EIKEEL4QMuxGNYL9DeUObrCepIvbV7Ck-qjKfVHOMkc/edit?usp=drivesdk)
1. Take an array from input and print all the even numbers of that array.
2. Take an array from input and count how many odd numbers are present in that array.
3. Take an array from input and print the maximum value of that array.
4. Take an array from input and print the minimum value of that array.

## Feedback Form Module 10
- মডিউল রিলেটেড তোমার যে কোন ফিডব্যাক থাকলে এই ফর্মে লিখে দিতে পারো। আমরা তোমার ফিডব্যাক গুরুত্বসহকার দেখব।
- [Form Links](https://forms.gle/DH5mjuGD1x2EZ4z29)