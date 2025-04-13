## Date: 08 April, 2025 - Tuesday

## 0. Introduction
- What is loop?
- 3 type loops in c programming:
    - For Loop
    - While Loop
    - Do-While Loop
- Conditional loop logic
- Break statement
- Continue statement
- Recognizing infinite loops
- Prevention Techniques
- Emergency Handling

## 1. What is loop
- A loop in C is used to repeat a block of code as long as a condition is true.

## 2. For loop
- Program: `for_loop.c`

## 3. For Loop Type-1 Animated
- Explanation program to `for_loop.c`

## 4. For loop II
- Program: `for_loop2.c`

## 5. For Loop Type-2 Animated
- Explanation program to `for_loop2.c`

## 6. More for loop
- Program: `more_for_loop.c`

## 7. Sum from 1 to N
- Program: `sum_n.c`
- QS: N number summation 1 to 100

## 8. Sum from 1 to N Animated
- Explanation program to `sum_n.c`

## 9. Checking odd even with condition
- Program: `even_odd.c`

## 10. Loop with condition
- Program: `loop_condition.c`

## 11. Break statement
- Program: `break_statements.c`
- Break statements stop a loop

## 12. Break Animated
- Explanation break statement `break_statements.c`

## 13. Continue statement
- Program: `continue_statements.c`
- Continue means to skip

## 14. Continue Animated
- Explanation continue statement `continue_statements.c`

## 15. While loop
- Program: `while_loop.c`

## 16. While loop Animated
- Explanation while loop `while_loop.c`

## 17. Do while loop
- Program: `do_while_loop.c`
- 1st one again to run do while loop, then check to condition

## 18. How to save yourself from infinity loop
- Program: `infinity_loop.c`
- You can use to infinity loop, then your pc maybe crashed or slow.
- This infinity loop can stop or shortcut is `ctrl+c`

## 19. Summary
- Import concept in any programming languages `Loop`
- For loop
- Summation with loop
- Conditions use in loop
- Control loop with 2 step:
    - Break statement
    - Continue statement
- While Loop
- Do-while loop
- Infinity loop

## Quiz: Module 03
- `Total Questions: 10`
- `Total Marks: 10`

## 🧠 C Programming Multiple Choice Questions with Explanations

### 1. Which loop did we learn today?
   A) for  
   B) while  
   C) do while  
   D) ✅ All of the above

> **Explanation:** আজকে আমরা C প্রোগ্রামিং এর for, while, এবং do while লুপ শিখেছি। সবগুলো লুপ এর কাজ একই কিন্তু সিনট্যাক্সের পার্থক্য রয়েছে।

---

### 2. For the following loop, how many times will “hi” be printed?
```c
for(int j=5;j<=10;j++)
{
     printf("hi ");
}
```
   A) 5  
   B) ✅ 6  
   C) 9  
   D) 10

> **Explanation:** লুপটি j=5 থেকে j=10 পর্যন্ত চলবে (৫,৬,৭,৮,৯,১০ - মোট ৬ বার)। তাই "hi" ৬ বার প্রিন্ট হবে।

---

### 3. For the following loop, how many times will “hi” be printed?
```c
for(int j=5;j<=10;j++)
{
     printf("hi ");
     j++;
}
```
   A) 2  
   B) ✅ 3  
   C) 4  
   D) none of the above

> **Explanation:** লুপে j এর মান ৫ থেকে শুরু হয়ে প্রতিবার ২ করে বাড়ে (একবার লুপের j++ স্টেপে এবং একবার for কোড ব্লকের ভিতরের j++ স্টেটমেন্টে)। লুপটি চলবে যখন j=5,7,9 (মোট ৩ বার) এবং j=11 এ গিয়ে লুপ থেমে যাবে।

---

### 4. What will be the output of the following code?
```c
int main()
{
    int i=0,j=0;
    for(j=1;j<=5;j++)
    {
        i++;
    }
    printf("%d",j);
}
```
   A) 1  
   B) 0  
   C) 5  
   D) ✅ 6

> **Explanation:** লুপের শর্ত j=1 থেকে j<=5 পর্যন্ত চলবে (প্রতি স্টেপে 1 করে বৃদ্ধি হবে)। লুপটি j=5 পর্যন্ত চলার পর j++ হওয়ায় j-এর মান ৬ হয় (কারণ j=6 হলে শর্ত j<=5 মিথ্যা হয়, তাই লুপ বন্ধ হয়)। তাই, কোডের শেষ লাইন printf("%d", j) → 6 প্রিন্ট করবে।

---

### 5. What will be the output of the following code?
```c
int main()
{
    for(int i=0;i<=10;i++)
    {
        int x = 4;
    }
    printf("%d",i);
}
```
   A) 10  
   B) 11  
   C) 0  
   D) ✅ Error

> **Explanation:**  i ডিক্লেয়ার করা হয়েছে for লুপের ভিতরে। তাই এটি শুধু লুপের ভিতরেই এক্সেসিবল। প্রিন্ট স্টেটমেন্ট printf("%d",i) এ i অ্যাক্সেস করতে গেলে কম্পাইলার এরর হবে, কারণ i এখানে undefined।

---

### 6. What will be the output of the following code?
```c
int main()
{
    int i = 1;
    do
    {
        printf("%d ",i);
        i++;
    } while (i<5);
}
```
   A) ✅ 1 2 3 4  
   B) 1 2 3 4 5  
   C) 2 3 4 5  
   D) No output

> **Explanation:** do-while লুপ অন্তত একবার কোড এক্সিকিউট করে, তারপর কন্ডিশন চেক করে। i=1 থেকে শুরু করে i<5 পর্যন্ত (i=4 পর্যন্ত) প্রিন্ট হবে। i=5 হলে কন্ডিশন i<5 মিথ্যা হয়, তাই লুপ বন্ধ হয়।

---

### 7. How many times “hello” will be printed?
```c
int main()
{
    int i = -5;
    while(i<3)
    {
        printf("hello ");
        i+=2;
    }
}
```
   A) 3  
   B) ✅ 4  
   C) 5  
   D) 8

> **Explanation:** i এর শুরুর মান -5 এবং লুপ চলবে যতক্ষণ i<3 থাকে । প্রতি ধাপে i এর মান 2 করে বাড়ে। i এর মান -৫ থেকে শুরু হয়ে ২ করে বাড়ে এবং i এর সম্ভাব্য মান -৫, -৩, -১, ১ এর জন্য ৪ বার "hello" প্রিন্ট করে। i এর মান ৩ এ গিয়ে লুপ বন্ধ হয়।

---

### 8. For which statement there will be an infinite loop?
   A) for(int i=5; i>=10; i--)  
   B) for(int i=5; i>=10; i++)  
   C) for(int i=-5; i>=-10; i--)  
   D) ✅ for(int i=-3; i>=-10; i++)

> **Explanation:** for(int i=-3; i>=-10; i++) এই লুপে i এর মান -3 থেকে শুরু হয়ে প্রতি স্টেপে 1 করে ক্রমাগত বাড়তে থাকবে, কিন্তু শর্ত i>=-10 কখনই মিথ্যা হবে না (কারণ i সর্বদা -10 এর চেয়ে বড় থাকবে)। ফলে এটি একটি ইনফিনিটি লুপ তৈরি করবে।

---

### 9. Which of the below loop will give the same values of i in reverse order for the loop? 
```c
for(int i=0;i<n;i++)
```
   A) for(int i=n; i>0; i--)  
   B) for(int i=n+1; i>=0; i++)  
   C) ✅ for(int i=n-1; i>=0; i--)  
   D) for(int i=n-1; i>0; i--)

> **Explanation:** for(int i=n-1; i>=0; i--) এই লুপটি i এর মান n-1 থেকে শুরু করে 0 পর্যন্ত প্রিন্ট করে। যা মূলত লুপের (i=0 থেকে i<n) মানগুলির ঠিক reverse order প্রিন্ট করে।

---

### 10. What will be the output of the following code?
```c
int main()
{
    int i = 5;
    while(i<10)
    {
        printf("i");
        i++;
    }
}
```
   A) 5 6 7 8 9  
   B) 5 6 7 8 9 10  
   C) 6 7 8 9  
   D) ✅ None of the above.

> **Explanation:** প্রোগ্রামটি i এর মান প্রিন্ট করে না, বরং "i" স্ট্রিংটি প্রিন্ট করে। লুপটি i=5 থেকে i=9 পর্যন্ত (৫ বার) চলবে। তাই আউটপুট হবে: i i i i i

## Extra Practice Problem (Optional):
- Write a c program to print 8’s time table to 200
- Write a c program to print all odd number from 100 to 1
- Practice today’s all problem with while loop
- Write the differences between break and continue

<br>

- Write a c program to print 8’s time table to 200
    ``` 
        #include <stdio.h>

        int main() {
            int i = 8;
            while(i <= 200) {
                printf("%d\n", i);
                i += 8;
            }
            return 0;
        }
    ```

- Write a c program to print all odd number from 100 to 1
    ```
        #include <stdio.h>

        int main() {
            int i = 99; // Start with the highest odd number under 100
            while(i >= 1) {
                printf("%d\n", i);
                i -= 2;
            }
            return 0;
        }
    ```

- Practice today’s all problem with while loop
    ```
        for(int j=5; j<=10; j++) {
            printf("hi ");
        }
    ```
    - Converted to while loop:
    ```
        int j = 5;
        while(j <= 10) {
            printf("hi ");
            j++;
        }
    ```
    - Try converting all your quiz problems like this for practice!

- Write the differences between break and continue
    - Difference Between `break` and `continue` in C

    | Feature     | `break`                              | `continue`                                |
    |-------------|---------------------------------------|--------------------------------------------|
    | Definition  | Exits the loop entirely               | Skips the current iteration only           |
    | Usage       | Used to terminate loop/switch early  | Used to skip remaining code in loop        |
    | Effect      | Stops the loop execution              | Moves control to the next loop condition   |
    | Example     | `if (x == 5) break;`                  | `if (x == 5) continue;`                    |
    ```
        // break
        for(int i=1; i<=5; i++) {
            if(i == 3) break;
            printf("%d ", i);
        }
        // Output: 1 2

        // continue
        for(int i=1; i<=5; i++) {
            if(i == 3) continue;
            printf("%d ", i);
        }
        // Output: 1 2 4 5
    ```

