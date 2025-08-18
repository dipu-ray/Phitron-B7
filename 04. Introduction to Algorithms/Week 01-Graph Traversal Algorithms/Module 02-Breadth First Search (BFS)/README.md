# Date: 17 August, 2025 - Sunday

## Topics:
0. Adjacency List
1. Adjacency List Implementation
2. Adjacency List Animated
3. Edge List
4. Edge List Animated
5. Comparison of 3 graph representations
6. Graph Visualization
7. Graph Traversal
8. BFS Traversal theory
9. BFS traversal implementation
10. BFS Traversal Animated
11. Complexity Analysis of BFS

## 0. Adjacency List
- `Adjacency List` concept and logic building with drawing:
    - <img src="./images/drawing.png" width="500">

## 1. Adjacency List Implementation
- Program: `adjacency_list.cpp`

## 2. Adjacency List Animated
- Explanation this drawing with animated way in this video:
    - <img src="./images/drawing2.png" width="500">

## 3. Edge List
- `Edge List` concept and logic building with drawing:
    - <img src="./images/drawing3.png" width="500">
- Program: `edge_list.cpp`

## 4. Edge List Animated
- Explanation this drawing with animated way in this video:
    - <img src="./images/drawing4.png" width="500">

## 5. Comparison of 3 graph representations
- Comparison of 3 graph representations:
    - `Adjacency Matrix`
        - <img src="./images/drawing5.png" width="500">
    - `Adjacency List`
        - <img src="./images/drawing6.png" width="500">
    - `Edge List`
        - <img src="./images/drawing7.png" width="500">
- Check 2 nodes connected or not:
    - `Adjacency Matrix O(1)`
    - `Adjacency List O(n)`
    - `Edge List O(n)`
- All the connected nodes from a node:
    - `Adjacency List O(1)`
    - `Adjacency Matrix O(n)`
    - `Edge List O(n)`
- Need to Edge nodes from a all nodes:
    - `Edge List O(1)`
    - `Adjacency List O(n)`
    - `Adjacency Matrix O(n)`

## 6. Graph Visualization
- [Go to the link](https://csacademy.com/app/graph_editor/)
- This link for `Graph Visualization`

## 7. Graph Traversal
- Two type are Graph Traversal:
    - `Breadth First Search`
    - `Depth First Search`
- `Breadth First Search` done the work with `level order`
    - <img src="./images/drawing8.png" width="500">
- `Depth First Search` done the work with `Depth wise`
    - <img src="./images/drawing9.png" width="500">

## 8. BFS Traversal theory
- `BFS Traversal` also similar to `Binary tree level order traversal`
    - <img src="./images/drawing10.png" width="500">
- Tree can't going from children to parent, but Graph can going from children to parent.
- Duplicate value are not stored:
    - <img src="./images/drawing11.png" width="500">
    - <img src="./images/drawing12.png" width="500">