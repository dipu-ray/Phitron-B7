# Date: 31 August, 2025 - Sunday

## Topics:
- Module 10 Problem List
0. Introduction
1. Why we need to learn Floyd-Warshall
2. Floyd-Warshall Theory I
3. Floyd-Warshall Theory II
4. Floyd-Warshall Implementation
5. Floyd-Warshall Animated
6. Detect negative weighted cycle using Floyd-Warshall
7. DFS vs BFS vs Dijkstra vs Bellman-Ford vs Floyd-warshall
8. Shortest Routes II
9. Summary
- Quiz: Module 10
- Quiz Explanation Module 10
- Feedback Form Module 10

## Module 10 Problem List
- [Problem List Link:](https://docs.google.com/document/d/1uGHvBVITHY8DknLY7KIZ-ey5emDxlJyty4RG35EGcPI/edit?usp=sharing)
- <img src="./images/problem.png" width="200">

## 0. Introduction
- Single source shortest distance:
    - BFS
    - Dijkstra
    - Bellman-Ford
- All pair shortest distance:
    - Floyd-Warshall

## 1. Why we need to learn Floyd-Warshall
- First we see this problem and why need to Floyd-Warshall algorithm
    - [Problem List Link:](https://docs.google.com/document/d/1uGHvBVITHY8DknLY7KIZ-ey5emDxlJyty4RG35EGcPI/edit?usp=sharing)
    - <img src="./images/problem.png" width="250">
- Single source shortest distance:
    - BFS - `O(V+E)`
    - Dijkstra - `O(ElogV)`
    - Bellman-Ford - `O(VE)`
- All pair shortest distance:
    - Floyd-Warshall - `O(V^3)`
- This problem doesn't solve with `BFS`, `Dijkstra` or `Bellman-Ford`. This problem solve with `Floyd-Warshall` algorithm. `Floyd-Warshall` is a powerful algorithm.

## 2. Floyd-Warshall Theory I
- <img src="./images/drawing.png" width="300">

## 3. Floyd-Warshall Theory II
- <img src="./images/drawing2.png" width="300">

## 4. Floyd-Warshall Implementation
- Program: `floyd_warshall.cpp`

## 5. Floyd-Warshall Animated
- Explanation this code in this video:
    ```
    for(int k = 0; k < n; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(adj_mat[i][k] != INT_MAX && adj_mat[k][j] != INT_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]) {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }
    ```

## 6. Detect negative weighted cycle using Floyd-Warshall
- Program: `detect_nwc.cpp`

## 7. DFS vs BFS vs Dijkstra vs Bellman-Ford vs Floyd-warshall
- `Algorithms - Time Complexity -> Uses of cases`
- `DFS - O(V+E) -> For Traverse`
- `BFS - O(V+E) -> For Fixed Source`
- `Dijkstra - O(ElogV) -> Weighted Fixed Source`
- `Bellman-Ford - O(VE) -> Negative Weighted + Cycle`
- `Floyd-Warshall - O(V^3) -> For Multiple Sources`
- Think and work with better time complexity.

## 8. Shortest Routes II
- <img src="./images/problem.png" width="250">
- [Shortest Routes II - Problem Link](https://cses.fi/problemset/task/1672/)
- Solved Program: `shortest_routes_2.cpp`

## 9. Summary
- Learn and explore to Floyd-Warshall Algorithm.
- Find the Shortest Routes with Floyd-Warshall Algorithm.
- We learn when to use which algorithms.