# Date: 19 August, 2025 - Tuesday

## Topics:
0. Introduction
1. DFS Traversal
2. DFS Traversal Implementation
3. DFS Animated
4. What is 2D Grid
5. DFS on 2D grid
6. DFS on 2D grid Implementation I
7. DFS on 2D grid Implementation II
8. DFS on 2D grid Animated
- Quiz: Module 03
- Quiz Explanation Module 03
- Feedback Form Module 03

## 0. Introduction
- Graph Traversal Algorithms - `Depth First Search (DFS)`
- Learn and understanding when `BFS` using and when `DFS` using.
- `Depth First Search (DFS)` on a 2D Grid
- `Breadth First Search (BFS)` on a 2D Grid

## 1. DFS Traversal
- You can traversal as your wish:
    - <img src="./images/drawing.png" width="500">
    - <img src="./images/drawing2.png" width="500">
- `DFS` code implement with `Recursion`

## 2. DFS Traversal Implementation
- Code implementation for this Graph:   
    - <img src="./images/drawing3.png" width="500">
- Program: `dfs.cpp`

## 3. DFS Animated
- Explanation those code in this video with animated way:
    ```
    void dfs(int src) {
        cout << src << " ";
        vis_arr[src] = true;
        for(int child : adj_list[src])
            if(vis_arr[child] == false)
                dfs(child);
    }
    ```