# Date: 25 May, 2025 - Sunday

## Topics:
0. Introduction
1. Static vs Dynamic Memory
2. Dynamic Variable
3. Dynamic variable Animated
4. Dynamic Array
5. Dynamic array Animated
6. Dynamic Array Return From Function
7. Return Array From Function Animated
8. Increase Size of Dynamic Array
9. Why We Need Dynamic Memory Allocation Animated
10. Summary
- Quiz: Module 02
- Feedback Form and Quiz Explanation

## 0. Introduction
- `Dynamic` and `Static` memory in C++
- How to declare dynamic variable in C++
- How to declare dynamic array in C++
- Array return from function in C++
- How to delete dynamic memory in C++

## 1. Static vs Dynamic Memory
- Stack memory in C++. It's also call to `Static` or `Compile Time` memory.
- Heap memory in C++. It's also call to `Dynamic` or `Runtime` memory.
- What is the difference between `stack memory` and `heap memory`?
    - Stack memory have limited memory.
    - Heap memory have more memory.
- Dynamic array and static array syntax are different.
- Dynamic and Static memory difference 1:
![difference 1 drawing](./images/drawing.png)
- Dynamic and Static memory difference 2:
![difference 2 drawing](./images/drawing2.png)

## 2. Dynamic Variable
- How to declare dynamic variable in C++
- Program: `dynamic_variable.cpp`
- `new` keyword access to heap memory.
    - Syntax: `new datatype`
- Pointer use in dynamic variable.
- Pointer store another variable address.
- Pointer syntax:
    - `datatype *variable_name = new int;`
    - Like: `int *x = new int;`
- Stack memory are auto delete.
- Heap memory are not auto delete.

## 3. Dynamic variable Animated
- Explanation dynamic variable program. Like `dynamic_variable.cpp` this program.

## 4. Dynamic Array
- Program: `dynamic_array.cpp`
- Dynamic array structure:
    - `datatype array_name = new datatype[array_size]`

## 5. Dynamic array Animated
- Explanation this `dynamic_array.cpp` program.

## 6. Dynamic Array Return From Function
- Program: `dynamic_arr_func.cpp`

## 7. Return Array From Function Animated
- Explanation this `dynamic_arr_func.cpp` program.

## 8. Increase Size of Dynamic Array
- Program: `size_increase.cpp`
- You can delete a dynamic variable or dynamic array with this `delete var_name/arr_name` keyword using.
- Static variable or static array you can not delete.

## 9. Why We Need Dynamic Memory Allocation Animated
- Explanation dynamic memory allocation to the whole process 02 to 08 videos examples.
- `Problem 1`: Stack memory are auto delete when he return from a function
- `Problem 02`: You can not delete a stack memory variable or array.
- These two problem are solved with `Dynamic Variable/Array`

## 10. Summary
- Understand the dynamic memory allocation
- Understand what is the difference between dynamic or static memory.
- Understand dynamic variable and dynamic array.
- Static memory are auto delete data after return from function.
- Static memory size not increase but dynamic memory size are increase.
- C++ structure shortcut with snippet:
    - Copy C++ structure and then go to `snippet generator`. Paste to your structure and copy `VSCode` copy then go to your `VSCode software`. Click on `setting icon` go to snippet select on your languages then paste your copied generator copy code.