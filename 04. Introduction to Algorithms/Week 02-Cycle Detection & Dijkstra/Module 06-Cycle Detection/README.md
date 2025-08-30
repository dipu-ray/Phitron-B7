# Date: 24 August, 2025 - Sunday

## Topics:
0. Introduction
1. Detect cycle in undirected graph
2. Detect cycle in undirected graph using BFS
3. Detect cycle in undirected graph using BFS Animated
4. Detect cycle in undirected graph using DFS
5. Detect cycle in directed graph
6. Detect cycle in directed graph using DFS
7. Detect cycle in directed graph using DFS Animated
- Quiz: Module 06
- Extra Practice Problem and Quiz Explanation
- Feedback Form Module 06

## 0. Introduction
- We will learn to `Cycle Detection`
- `Cycle Detection`:
    - `Undirected`:
        - `BFS`
        - `DFS`
    - `Directed`:
        - `DFS`
- <img src="./images/drawing.png" width="400">
- This `Cycle Graph` also a loop system. This cycle will going around or rotates as a loops.
- `Undirected Graph have minimum 3(three) nodes`
    - <img src="./images/drawing2.png" width="400">
- `Directed Graph make with 2(two) nodes`
    - <img src="./images/drawing3.png" width="400">

## 1. Detect cycle in undirected graph
- `Undirected Graph have minimum 3(three) nodes must or 3 nodes can above`
- Build logic for `Detect cycle in undirected graph` with drawing:
    - <img src="./images/drawing4.png" width="400">
    - <img src="./images/drawing5.png" width="400">
    - <img src="./images/drawing6.png" width="400">
- `Undirected Graph` simple logics:
    - `If there a node visited then check to this node also a parent, then this is not a cycle`.
    - `If this node is not a parent but already this visited and going to there, then this a cycle`.

## 2. Detect cycle in undirected graph using BFS
- Program: `main.cpp`

## 3. Detect cycle in undirected graph using BFS Animated
- Explanation this code in this video:
    ```
    void bfs(int src) {
        queue<int> q;
        q.push(src);
        vis[src] = true;
        while(!q.empty()) {
            int par = q.front(); // Make a parent value
            q.pop();
            for(int child : adj_list[par]) {
                if(vis[child] && parent[par] != child)
                    cycle = true;
                if(!vis[child]) {
                    q.push(child);
                    vis[child] = true;
                    parent[child] = par;
                }
            }
        }
    }
    ```

## 4. Detect cycle in undirected graph using DFS
- Program: `main2.cpp`

## 5. Detect cycle in directed graph
- Those concept and logic understand in this video.
    - This is not a `Cycle`:
        - <img src="./images/graph.png" width="400">
    - This is a `Cycle`:
        - <img src="./images/graph2.png" width="400">

## 6. Detect cycle in directed graph using DFS
- Program: `main3.cpp`

## 7. Detect cycle in directed graph using DFS Animated
- Explanation this code in this video:
    ```
    void dfs(int src) {
        vis[src] = true;
        pathVis[src] = true;
        for(int child : adj_list[src]) {
            if(vis[child] && pathVis[child])
                cycle = true;
            if(!vis[child]) {
                dfs(child);
            }
        }
        pathVis[src] = false;
    }
    ```