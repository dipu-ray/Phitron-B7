## Date: 06 April, 2025 - Sunday

## 0. Introduction
- Operators
- Arithmetic Operators
- Relational Operators
- Logical Operators
- Conditional Statements
- Nested If-Else

## 1. Arithmetic Operators
- Program: `arithmetic_operators.c`
- `+`
- `-`
- `*`
- `/`
- `%`

## 2. Modulus Operators
- Program: `modulus_operators.c`
- `%`

## 3. Relational Operators
- Less than `<`
- Less or equal than `<=`
- Greater than `>`
- Greater or equal than `>=`
- Equals to `==`
- Not equals to `!=`

## 4. Logical Operators
- Logical AND `&&`
- Logical OR `||`
- Logical NOT `!`

## 5. Logical Operator Animated
- AND
    - `T && T = T`
    - `T && F = F`
    - `F && T = F`
    - `F && F = F`

- OR 
    - `T || T = T`
    - `T || F = T`
    - `F || T = T`
    - `F || F = F`

- NOT
    - `!T = F`
    - `!F = T`

## 6. Conditional Statement Type 1 Animated
- Example with two conditions

## 7. If else
- Program: `conditions.c`

## 8. Conditional Statement Type 2 Animated
- Example with three conditions

## 9. If else ladder
- Program: `conditions_ladder.c`
- If else ladder is multiple conditions

## 10. Conditional Statement Type 3 Animated
- Conditions into conditions

## 11. Nested if else
- Program: `nested_conditions.c`

## 12. Nested if else Animated

## 13. If else variation
- Multiple ladder conditions use without else
- They have so many conditions variation

## 14. Summary
- Knowing some operators
- Arithmetic operators
- Modulus operators
- Relational operators
- Logical operators
- Knowing conditional related
- Conditions variations
- Nested conditions
- Conditions ladder

## Quiz: Module 02
- `Total Questions: 10`
- `Total Marks: 10`

## 🧠 C Programming Multiple Choice Questions with Explanations

---

### 1. What will be the output of the following code?
```c
#include <stdio.h>
int main() {
    int a = 15%4;
    printf("%d",a);
}
```
**A)** 1   
**B)** 2   
**C)** ✅ 3   
**D)** 4  

> **Explanation:** `%` (modulus operator) gives the remainder after division. 15 ÷ 4 has a remainder of 3.

---

### 2. What will be the output of the following code?
```c
#include <stdio.h>
int main() {
    double a = 15/4;
    printf("%lf",a);
}
```
**A)** 3   
**B)** 3.000000   
**C)** ❌ 3.750000   
**D)** 4  

> **Explanation:** Integer division (15/4) results in 3. `double a` stores 3 as 3.000000.

---

### 3. 20 > 10 && 10 < 20, Is it true or false?
**A)** ✅ True   
**B)** False

> **Explanation:** Both conditions are true and `&&` (AND) requires all conditions to be true.

---

### 4. What will be the output of the following code?
```c
#include <stdio.h>
int main() {
    int a = 6;
    if(a>5){
        printf("hi");
    }
    else if(a>3){
        printf("bye");
    }
}
```
**A)** bye   
**B)** ✅ hi

> **Explanation:** `if` ladder checks top to bottom. The first condition is true, so "hi" is printed.

---

### 5. What will be the output of the following code?
```c
#include <stdio.h>
int main() {
    int num = 5;
    if (num > 0) {
        if (num < 10){
            printf("Small positive number\n");
        }
    }
    return 0;
}
```
**A)** Error   
**B)** No output   
**C)** ✅ Small positive number

> **Explanation:** Nested `if` statements. Both conditions are true, so message is printed.

---

### 6. What will be the output of the following code?
```c
#include <stdio.h>
int main() {
    int x = 10;
    int y = 12;
    if(x>=y || x<=y) {
        printf("hi");
    } else {
        printf("hello");
    }
}
```
**A)** ✅ hi   
**B)** hello   
**C)** None   
**D)** All

> **Explanation:** `x<=y` is true; `||` (OR) only needs one condition to be true.

---

### 7. What will be the output of the following code?
```c
#include <stdio.h>
int main() {
    int x = 10;
    int y = 12;
    if(x>=y || x<=y) {
        printf("hi ");
    }
    printf("hello");
}
```
**A)** ✅ hi hello   
**B)** hello hi   
**C)** hihello   
**D)** hello

> **Explanation:** Condition is true, so both `printf` statements are executed.

---

### 8. Which of the following is not a logical or relational operator?
**A)** !=   
**B)** ==   
**C)** ||   
**D)** ✅ +

> **Explanation:** `+` is an arithmetic operator, not logical or relational.

---

### 9. What will be the output of the following code?
```c
#include <stdio.h>
int main() {
    int x = 5;
    if (x < 10) {
        printf("hello ");
    }
    if (x == 5) {
        printf("hi");
    } else {
        printf("no");
    }
}
```
**A)** hello   
**B)** hi   
**C)** ✅ hello hi   
**D)** hello no

> **Explanation:** Both `if` conditions are true, so both `printf` statements are executed.

---

### 10. Why do we need relational operators?
**A)** To add two numbers.   
**B)** ✅ To compare values and perform logical operations on them.   
**C)** To get remainder.   
**D)** To check if both conditions are true.

> **Explanation:** Relational operators compare two values and return true/false based on conditions.

## Extra Practice Problem (Optional):
- Take a number from user and check if its a even number or odd number.
    ``` 
        #include <stdio.h>

        int main() {
            int num;

            // Taking input from user
            printf("Enter a number: ");
            scanf("%d", &num);

            // Check even or odd
            if (num % 2 == 0) {
                printf("%d is an Even number.\n", num);
            } else {
                printf("%d is an Odd number.\n", num);
            }

            return 0;
        }
    ```

- Take a number from user and check if its a positive or negative number.
    ```
        #include <stdio.h>

        int main() {
            int num;

            // Taking input from user
            printf("Enter a number: ");
            scanf("%d", &num);

            // Check if positive or negative
            if (num > 0) {
                printf("%d is a Positive number.\n", num);
            } else if (num < 0) {
                printf("%d is a Negative number.\n", num);
            } else {
                printf("The number is Zero.\n");
            }

            return 0;
        }
    ```

- Explain if else ladder.
    - The if-else ladder in C programming is a way to check multiple conditions one by one in a sequence. As soon as one condition is true, the corresponding block of code is executed, and the rest of the ladder is skipped.

    - Syntax of if-else ladder:
        ```
            if (condition1) {
                // code block 1
            }
            else if (condition2) {
                // code block 2
            }
            else if (condition3) {
                // code block 3
            }
            else {
                // code block if none of the above conditions are true
            }
        ```
    - Example:
        ```
            #include <stdio.h>

            int main() {
                int marks = 75;

                if (marks >= 90) {
                    printf("Grade: A\n");
                }
                else if (marks >= 80) {
                    printf("Grade: B\n");
                }
                else if (marks >= 70) {
                    printf("Grade: C\n");
                }
                else {
                    printf("Grade: F\n");
                }

                return 0;
            }
        ```

    - 🟢 Output: `Grade: C`