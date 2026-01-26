# Date: 07 September, 2025 - Sunday

## Topics:
- Problem and Visualizer Link
0. Introduction
1. What is Dynamic Programming
2. Recursion recap
3. Factorial with recursion
4. Fibonacci with recursion
5. Recursive call visualizer
6. Optimizing Fibonacci
7. Fibonacci with DP
8. Fibonacci bottom up
9. LeetCode Climbing Stairs
10. Summary
- Quiz: Module 14
- Quiz Explanation Module 14

## Problem and Visualizer Link
- [Problem Link:](https://docs.google.com/document/d/1KqvXBvKMWG1IDIWjDoRsWU2t7pjjAxysRM37H4dfrGI/edit?usp=sharing)
- <img src="./images/problem.png" width="250">

## 0. Introduction
- Learn and explore to `Dynamic Programming`.
- `Dynamic Programming` have two types of approach:
    - `Top Down`
    - `Bottom Up`
- `Dynamic Programming` mainly work on recursion optimization.
- `Recursion` must be exert for in `Dynamic Programming`.

## 1. What is Dynamic Programming
- `Dynamic Programming` means `recursion + optimization`.
- When recursive solution have to duplicate or repeat to call then make to optimized recursion, that also call to `Dynamic Programming`.
- `Dynamic Programming` have two types of approach:
    - `Top Down -> Using with Recursion`
    - `Bottom Up -> Using with Loop`

## 2. Recursion recap
- Program: `recursion.cpp`

## 3. Factorial with recursion
- <img src="./images/drawing.png" width="250">
- Program: `factorial.cpp`

## 4. Fibonacci with recursion
- <img src="./images/drawing2.png" width="250">
- Program: `fibonacci.cpp`
- This program will optimized in `7. Fibonacci with DP`.

## 5. Recursive call visualizer
- [Recursion Tree Visualizer Link:](https://quanticdev.com/tools/recursion-visualization/)
- <img src="./images/drawing3.png" width="250">

## 6. Optimizing Fibonacci
- <img src="./images/drawing4.png" width="250">

## 7. Fibonacci with DP
- Program: `fibonacci_memoization.cpp`

## 8. Fibonacci bottom up
- <img src="./images/drawing5.png" width="250">
- Program: `fibonacci_bottom_up.cpp`

## 9. LeetCode Climbing Stairs
- [Problem Link:](https://leetcode.com/problems/climbing-stairs/description/)
- Solved Program:
    ```
    class Solution {
    public:
        int dp[50];
        int fibo(int n)
        {
            if(n<3) return n;
            if(dp[n] != -1) return dp[n];
            return dp[n] = fibo(n-1) + fibo(n-2);
        }
        int climbStairs(int n) {
            memset(dp,-1,sizeof(dp));
            return fibo(n);
        }
    };
    ```

## 10. Summary
- Today we'll learn `Dynamic Programming (DP)` and DP basics
- `Dynamic Programming` mainly using for `Recursion`.
- Solved and make programs factorial and fibonacci using recursion
- Using `Memoization` technique and solved fibonacci.
- And lastly using `Bottom-Up or loops` for fibonacci.

## Quiz: Module 14
- `Total Questions: 10`
- `Total Marks: 10`

## Quiz Explanation Module 14
- [Quiz Explanation Link:](https://docs.google.com/document/d/126cvj8uI3XPsBIxKKJYPtnlIHt_hKWUv7YfS61xCUT0/edit?usp=sharing)