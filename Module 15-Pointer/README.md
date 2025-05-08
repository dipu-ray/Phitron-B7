# Date: 06 May, 2025 - Tuesday

## Topics:
0. Introduction
1. Pointer
2. Dereferencing a pointer
3. Pointer Animated
4. Pass by value
5. Pass by reference
6. Pass by value VS Pass by reference Animated
7. Why we use reference in scanf
8. Pointer in array
9. Function with array
10. Function with array Animated
11. Function with string
12. Summary
- Quiz: Module 15
- Extra Practice Problem and Quiz Explanation Module 15
- Feedback Form Module 15

## 0. Introduction
- Know to new concept this name is `pointer`.
- Understanding pointers memory addresses.
- Dereferencing a pointer: Accessing the value.
- `Pass by value` vs `pass by reference`.
- Pointers in array: Natural connection.
- Function with array: Practical Applications.

## 1. Pointer
- Pointer variable is normal variable
- Every variable have an address with hexadecimal.
- Program: `pointers.c`
- A variable address access with `%p` format specifier.
- `%p` came from pointers.
- How to pointer variable syntax:
    - `data_type* pointer_variable_name;`

## 2. Dereferencing a pointer
- Pointer variable size can `8 bytes`.
- Program: `dereferencing_pointer.c`
- Access with address a specific variable with `dereferencing a pointer`.
    - Example: `printf("%d", &variable_name);`
- Go to address to value, this called to dereference.
- Go to value to address, this called to reference.

## 3. Pointer Animated
- Explanation pointer

## 4. Pass by value
- Program: `pass_by_value.c`
- They have two different variable and no access.

## 5. Pass by reference
- Program: `pass_by_reference.c`

## 6. Pass by value VS Pass by reference Animated
- Explanation `pass by value` and `pass by reference` concept.

## 7. Why we use reference in scanf
- Program: `scan_function.c`
- `scanf()` function variable address are always changing. That's it, we use to `& - reference or address of`.
- `printf()` function variable address are not changing. That's it, we don't use to `& - reference or address of`.

## 8. Pointer in array
- Program: `pointer_array.c`
- Array also a pointer.

## 9. Function with array
- Program: `function_with_array.c`
- Any data type variable gone `pass by value` always.
    - `variable` - `pass by value`
    - `array` - `pass by reference`
- Try many way to understand the logics.

## 10. Function with array Animated
- Explanation to pass array in function.

## 11. Function with string
- Program: `function_with_string.c`

## 12. Summary
- Learn to pointer and pointer concept.
- Function have 2 way value pass:
    - `pass by value`
    - `pass by reference`
- We know to why we use `scanf()` function `& - address of` and why we don't use to `printf()` function `& - address of`.
- Array have a pointer and learn how they work.
- Function with array and learn to how to pass array in function. By default pass to reference.
- When array pass in function then declare to size of array.
- Known to function with string.