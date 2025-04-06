## Date: 05 April, 2025 - Saturday

## 1. Course Overview
- What is Programming?
    - Programming is the process of creating a set of instructions, or code, that a computer can follow to perform specific tasks, enabling humans to communicate with and control computers.

- Why do we need to learn programming?
    - We need to learn programming to solve problems efficiently, build real-world applications, automate tasks, boost career opportunities, and understand how technology works in our digital world and it's so fast working rather than human.

- What is a Programming Language?
    - A programming language is a set of instructions or commands that humans use to communicate with computers, allowing them to execute specific tasks and create software, applications, and other digital technologies.

- Which programming language should I start with?
    - C programmig language.

- Why choose c programming language?
    - C is called the "mother of all programming languages." It teaches you how software works under the hood—memory management, pointers, and low-level operations.

- The history of c programming language?
    - A successor to the programming language B, C was originally developed at Bell Labs by Ritchie between 1972 and 1973 to construct utilities running on Unix. It was applied to re-implementing the kernel of the Unix operating system. During the 1980s, C gradually gained popularity.

## 2. Introduction
- We will covered:
    - Basic structure of c program
    - Printing in c
    - Taking input in c
    - Variables and data types
    - Data types limitations
    - Variable naming rules

## 3. Basic Structure of C Programming Animated
- Humnan body have two parts, head and body. Same to in c programming have two part head and body.
- Basic structure in c programming:
    | Head | Body |
    |----------|----------|
    | Header Files | int main() |

## 4. First C Program Animated 

## 5. Running our first code
- Program: `hello_world.c`.

## 6. Printing in C
- \t = Tab
- \n = New line

## 7. Variables and Data Types Animated
- int = Integer (10, -20, 2000).
- float = Decimal number (3.14, -9.25, 100.75).
- char = Characterb ('A', 'b', '$', '&').
- double = Rather than float, decimal places.
- bool = True or False.

## 8. Variables in C
- Program: `variable.c`.
- Variable diclare: Data_type variable_name.
- Size: Computer know to binary like 0 and 1. They size are 1bit. So, basically computer works to binary code like 0 and 1.
    - 8 bit = 1 byte
    - 1024 byte = 1KB
    - 1024KB = 1MB
    - 1024MB = 1GB
    - 1024GB = 1TB

- Variable size:
    - int = 4 byte
    - float = 4 byte
    - char = 1 byte

## 9. Printing variables
- Program: `printing_variables.c`.
- Format specifiers in C Programming:
    | **Specifier** | **Description** | **Example** |
    |---------------|-----------------|-------------|
    | `%d` | Signed decimal integer (int) | `printf("%d", 42);` |
    | `%f` | Floating point number (float or double) | `printf("%f", 3.14);` |
    | `%c` | Single character | `printf("%c", 'A');` |

## 10. Boolean in C
- Program: `boolean.c`.
- True or false data types.

## 11. Why We Need to Take Input Animated
- Dynamically input from user to need and change.

## 12. How to take input in C
- Program: `take_input.c`.
- Use to scanf function.

## 13. Data Type Limitations Animation
- int = 4 bytes
- long long int = 8 bytes
- float = 4 bytes
- double = 8 bytes

## 14. Data type limitations in C
- 10 to the power 9 = 1000000000.
- int value work to `10 to the power 9`. Beacuse of, limitations.
- long long int value work to `10 to the power 18`. Beacuse of, limitations.
- float and double bigger than float.

## 15. Rules for Naming Variables Animated
- Variable name must start with a letter, digits or underscore. Example: `main_123.c`.
- Keywords can't be used as variables.

## 16. Summary
- Run first c program in vscode.
- How to print c program.
- How to define input in c program.
- Data types, variable and data types have limitations.
- Variables naming rules.

## Quiz: Module 01
- `Total Questions: 10`
- `Total Marks: 10`

### ✅ C Programming Multiple Choice Questions

### 1. What is stdio.h called?
**A)** initializing file  
**B)** Nothing  
**C)** I don’t know  
**D)** Header file ✅  
> **Explanation:** `stdio.h` একটি হেডার ফাইল যা C প্রোগ্রামিং-এ ব্যবহার করা হয়। এটি ইনপুট/আউটপুট ফাংশন (যেমন printf, scanf) ডিক্লেয়ার করে।

---

### 2. Which of the following is an integer value?
**A)** 3.145  
**B)** 3145 ✅  
**C)** ‘3’  
**D)** All of the above.  
> **Explanation:** একটি ইন্টিজার (integer) হলো পূর্ণ সংখ্যা, যেমন 1, 112, 1212, 3145 ইত্যাদি। কিন্তু 3.145 হচ্ছে দশমিক সংখ্যা (float) এবং '3' হচ্ছে ক্যারেক্টার (char)।

---

### 3. A char variable can store ____ bits?
**A)** 1  
**B)** 4  
**C)** 8 ✅  
**D)** 2  
> **Explanation:** একটি `char` ভেরিয়েবল সাধারণত 8 বিট (1 বাইট) ডাটা সংরক্ষণ করে, যা ক্যারেক্টার (যেমন 'A', '1', '@') রাখার জন্য যথেষ্ট।

---

### 4. Which of the following function is used for taking input in C language?
**A)** scan()  
**B)** print()  
**C)** scanf() ✅  
**D)** printf()  
> **Explanation:** C ভাষায় ইউজার ইনপুট নেওয়ার জন্য `scanf()` ফাংশন ব্যবহৃত হয়।

---

### 5. What is the format specifier for double variable?
**A)** %d  
**B)** %f  
**C)** %lf ✅  
**D)** %lld  
> **Explanation:** C প্রোগ্রামিং-এ `double` টাইপের ভেরিয়েবলের জন্য `%lf` ফরম্যাট স্পেসিফায়ার ব্যবহার করা হয়। `%f` ফ্লোট, `%d` ইন্টিজার, `%lld` লং লং ইন্টিজারের জন্য ব্যবহৃত হয়।

---

### 6. Which of the following function is used for printing output in C language?
**A)** scan()  
**B)** print()  
**C)** scanf()  
**D)** printf() ✅  
> **Explanation:** C ভাষায় আউটপুট প্রদর্শনের জন্য `printf()` ফাংশন ব্যবহৃত হয়।

---

### 7. A double variable can store ___ bytes?
**A)** 4  
**B)** 32  
**C)** 8 ✅  
**D)** 64  
> **Explanation:** C প্রোগ্রামিং-এ `double` টাইপের ভেরিয়েবল সাধারণত ৮ বাইট (64 বিট) মেমরি ব্যবহার করে।

---

### 8. Each statement in a C program should end with?
**A)** colon (:)  
**B)** Semicolon (;) ✅  
**C)** Dot(.)  
**D)** None of the above.  
> **Explanation:** C প্রোগ্রামিং-এ প্রতিটি স্টেটমেন্ট শেষ করতে সেমিকোলন (;) ব্যবহার করা হয়।

---

### 9. 1 kilobyte = ?
**A)** 1024 GB  
**B)** 1024 byte ✅  
**C)** 1024 bit.  
**D)** 1024 MB.  
> **Explanation:** ১ কিলোবাইট (KB) সমান ১০২৪ বাইট।

---

### 10. What is the output of the following code?
```c
#include <stdio.h>
int main() {
    int num = 100;
    printf("Number is = %d", num);
    return 0;
}
```

**A)** Number is = num  
**B)** Number is = 100 ✅  
**C)** 100  
**D)** Compilation Error  
> **Explanation:** `printf("Number is = %d", num);` → `%d` ফরম্যাট স্পেসিফায়ার num-এর ভ্যালু (১০০) প্রিন্ট করে, তাই আউটপুট হবে: **Number is = 100**

<br>

## Extra Practice Problem (Optional)
- Explain why we need long long int data type?
- Write all the rules for naming a variable in C programming.
- Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number.