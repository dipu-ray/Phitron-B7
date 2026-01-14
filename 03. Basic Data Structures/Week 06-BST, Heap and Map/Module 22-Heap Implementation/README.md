# Date: 03 August, 2025 - Sunday

## Topics:
0. Introduction
1. What is Complete Binary Tree
2. Array representation of complete binary tree
3. What is heap
4. Insert in heap theory
5. Insert in heap Implementation
6. Insert in heap Animated
7. Complexity of insert in heap
8. Delete from heap theory
9. Delete from heap Implementation
10. Delete from heap Animated
11. Summary
- Quiz: Module 22
- Extra Practice Problem and Quiz Explanation
- Feedback Form: Module 22

## 0. Introduction
- Learn and explore to Complete `Binary Trees` and `Heaps`
- Complete Binary Trees: `A Primer`
- Array Representation of Complete Binary Trees
- Introducing Heaps: A Specialized Binary Tree
- All programming languages have `Heaps STL`
- `Insertion` into a Heap
- `Deletion` from a Heap

## 1. What is Complete Binary Tree
- Complete Binary Trees have must be a left child
    - <img src="./images/drawing.png" width="500">
- Complete Binary Tree hight are `h -> O(log n)`

## 2 Array representation of complete binary tree
- A Complete Binary Tree convert to Arrays:
    - <img src="./images/drawing2.png" width="500">
    - <img src="./images/drawing3.png" width="500">
    - The Formula (Go to parent to child):
        - `parentIndex * 2 + 1 = leftIndex`
        - `parentIndex * 2 + 2 = rightIndex`
    - The Formula (Go to child to parent):
        - `(childIndex - 1) / 2 = parentIndex`

## 3 What is heap
- Heap are two types:
    - `Max Heap`
    - `Min Heap`
- `Max Heap`
    - `Max heap return to a big value` and `Max Heap` also better than `sort()`.
- `Min Heap`
    - `Min heap return to a small value`
- <img src="./images/drawing4.png" width="500">

## 4. Insert in heap theory
- <img src="./images/drawing5.png" width="500">
- Insert in heap in there have two (2) conditions:
    1. A complete Binary Tree
    2. Be a Max Heap
- Heap means array not a tree, we are tree drawing for better understanding.
- A complete Binary Tree & Be a Max Heap:
    - <img src="./images/drawing6.png" width="500">
- Now array's:
    - <img src="./images/drawing7.png" width="500">

## 5. Insert in heap Implementation
- <img src="./images/drawing6.png" width="500">
- From this image logic and idea convert into this code:
    - Program: `insert_in_max_heap.cpp`
    - Program: `insert_in_min_heap.cpp`

## 6. Insert in heap Animated
- Explanation in this video with max heap program or this code logics:
    ```
    int val;
    cin >> val;
    v.push_back(val);

    int current_idx = v.size() - 1;
    while(current_idx != 0) {
        int parent_idx = (current_idx - 1) / 2;
        if(v[parent_idx] < v[current_idx])
            swap(v[parent_idx], v[current_idx]);
        else
            break;
        current_idx = parent_idx;
    }

    for(int x : v)
        cout << x << " ";
    cout << endl;
    ```

## 7. Complexity of insert in heap
- This program loops or complexity analysis:
    ```
    while(current_idx != 0) {
        int parent_idx = (current_idx - 1) / 2;
        if(v[parent_idx] < v[current_idx])
            swap(v[parent_idx], v[current_idx]);
        else
            break;
        current_idx = parent_idx;
    }
    ```
    - this is `O(h) equivalent O(logN)` and this is a `Complete Binary Tree`. That why, that time complexity is `O(logN)`.
- `1 value add -> O(logN)`
- `n'th value add -> O(NlogN)`
- `1 sort() -> O(NlogN)`
- `n'th sort() -> O(N^2logN)` - This thing using heap then `O(NlogN)` and without using heap then `O(N^2logN)`.

## 8. Delete from heap theory
- <img src="./images/drawing8.png" width="500">
- Here is `29 root value` you can't delete min in heap. But you can delete min value in heap with this steps:
    - <img src="./images/drawing9.png" width="500">
    - <img src="./images/drawing10.png" width="500">
    - <img src="./images/drawing11.png" width="500">
    - <img src="./images/drawing12.png" width="500">
- And Array's:
    - <img src="./images" width="500">