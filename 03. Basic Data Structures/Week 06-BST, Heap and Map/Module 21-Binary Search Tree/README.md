# Date: 02 August, 2025 - Saturday

## Topics:
0. Introduction
1. What is BST
2. How to handle duplicate in BST
3. Searching in BST
4. Searching in BST Animated
5. Complexity of searching in BST
6. Insert in BST
7. Insert in BST Animated
8. Complexity of insert in BST
9. Idea of converting array to BST
10. Converting array to BST implementation
11. Converting array to BST Animated
12. Summary
- Quiz: Module 21
- Extra Practice Problem and Quiz Explanation
- Feedback Form: Module 21

## 0. Introduction
- `Navigating` Binary Search Tree
- Understanding the Structure
- `Handling Duplicates` in Binary Search Tree
- `Searching` in Binary Search Tree
- `Inserting Nodes` in Binary Search Tree
- Converting Arrays to `BSTs`
- Key Takeaways - `Balanced Structure`, `Real-World Application` and `Further Exploration`

## 1. What is BST
- `BST - Binary Search Tree`
- What is `BST`?
    - `Binary search` + `binary tree` they are two combined to make `binary search tree`.
    - BST is binary tree and you can search into binary search in binary tree.
- `BST` two conditions are maintain:
    - `all values of left sub-tree < node->val`
    - `all values of right sub-tree > node->val`
- <img src="./images/drawing.png" width="500">
- Binary Tree have two child or less than 2. Like - `0, 1, 2` Child's.
- <img src="./images/drawing2.png" width="500">
- `BST - Binary Search Tree` - left side child are smaller than root and right side child are bigger than root.

## 2. How to handle duplicate in BST
- `BST` two conditions are maintain:
    - `all values of left sub-tree < node->val`
    - `all values of right sub-tree > node->val`
    - But if the nodes are both equal then?
        - `Handle duplicate in BST`
- <img src="./images/drawing3.png" width="500">
- <img src="./images/drawing4.png" width="500">
- `Duplicate value are not insert to node. Just count in root`. Like this:
    - <img src="./images/drawing5.png" width="500">

## 3. Searching in BST
- Logic building or idea making with Drawing:
    - <img src="./images/drawing6.png" width="500">
    - <img src="./images/drawing7.png" width="500">
- Program: `search_in_BST.cpp`

## 4. Searching in BST Animated
- Explanation those code in this video with animated way:
    ```
    bool search(Node* root, int val) {
        if(root == NULL) return false;      // Base case
        if(root->val == val) return true;

        // Recursion call with condition
        if(root->val > val) return search(root->left, val);
        else return search(root->right, val);
    }
    ```

## 5. Complexity of searching in BST
- Binary Search Complexity is `O(log n)`
- Binary Search Tree Complexity is `O(Log n)`
- <img src="./images/drawing8.png" width="500">
- <img src="./images/drawing9.png" width="500">
- Binary Tree was good then complexity was `O(log n)` and Binary Tree was very bad then complexity was `O(n)`.
- `Binary Search Tree` going to every node with `height` that's why is complexity called by `O(h)`.
    - `BST -> O(h)`
- The Time Complexity:
    - `[Good] => [h =~ O(log n)] (~ Equivalent)`
    - `[Very Bad] => [h =~ O(n)] (~ Equivalent)`

## 6. Insert in BST
- Implementation logic with drawing:
    - <img src="./images/drawing10.png" width="500">
- Program: `insert_in_BST.cpp`

## 7. Insert in BST Animated
- Explanation those program in this video with animated way:
    ```
    void insert(Node* &root, int val) {
        if(root == NULL) root = new Node(val);
        if(root->val > val) {
            if(root->left == NULL) root->left = new Node(val);
            else insert(root->left, val);
        }
        else {
            if(root->right == NULL) root->right = new Node(val);
            else insert(root->right, val);
        }
    }
    ```

## 8. Complexity of insert in BST
- Logic build up with drawing:
    - <img src="./images/drawing11.png" width="500">
- `Going from root to NULL` then time complexity is `O(h)`
- Understanding time complexity of BST:
    - <img src="./images/drawing12.png" width="500">

## 9. Idea of converting array to BST
- How to an array convert into a BST. Build logic or concept understanding with drawing:
    - <img src="./images/drawing13.png" width="500">
    - <img src="./images/drawing14.png" width="500">
    - <img src="./images/drawing15.png" width="500">
    - <img src="./images/drawing16.png" width="500">
- It's totally make or build with `Recursion`.

## 10. Converting array to BST implementation
- Program: `array_to_BST.cpp`

## 11. Converting array to BST Animated
- Explanation those program in this video with animated way:
    ```
    Node* convert(int a[], int n, int l, int r) {
        if(l > r) return NULL;
        int mid = (l + r) / 2;
        Node* root = new Node(a[mid]);
        Node* leftRoot = convert(a, n, l, mid-1);
        Node* rightRoot = convert(a, n, mid+1, r);
        root->left = leftRoot;
        root->right = rightRoot;
        return root;
    }
    ```

## 12. Summary
- Learn and explore new Data Structure `BST - Binary Search Tree` and how they work.
- Search in `BST - Binary Search Tree`.
- Insertion in `BST - Binary Search Tree`.
- Array convert to `BST - Binary Search Tree`.
- This whole programs build with `Recursion`.
- Code thinking with draw or drawings and then implementation with code.

## Quiz: Module 21
- `Total Questions: 10`
- `Total Marks: 10`

## Extra Practice Problem and Quiz Explanation
- [Quiz Explanation:](https://docs.google.com/document/d/1pu8tzTn3rjJryq_jsOZFxSCNXE6pGE0QqugZXdCx7_4/edit?usp=sharing)
- [Extra Practice Problem (Optional):](https://docs.google.com/document/d/1eqBtMKpZg6j-32nKxeViq51SLK5bBtCdxG8QwVX99XM/edit?usp=sharing)
#### 1. How do we handle duplicates in a BST?
**a)** Insert duplicates on the right subtree  
**b)** Insert duplicates on the left subtree  
**c)** Do not allow duplicates  
**d)** Any of the above, depending on implementation ✅
> **Explanation:** মডিউলে বলা হইছিলো, BST তে ডুপ্লিকেট ভ্যালু নিয়ে সরাসরি কাজ করা হয় না। তবে, ডুপ্লিকেট ভ্যালু ও কাউন্ট ট্রি তে pair হিসেবে রাখা যায়। এর উপর ভিত্তি করে কুইজ করা হয়েছে। তবে, ডুপ্লিকেট ভ্যালু BST-তে বিভিন্নভাবে হ্যান্ডেল করা যায়: ডান সাবট্রিতে, বাম সাবট্রিতে, বা ডুপ্লিকেট এলাউ না করেও।
---
#### 2. In a BST, which property is true for any node?
**a)** Left child is always smaller, and right child is always larger ✅  
**b)** Left child is always larger, and right child is always smaller  
**c)** All nodes have two children  
**d)** All nodes are equal
> **Explanation:** প্রতিটি নোডের বাম সাবট্রিতে ছোট মান এবং ডান সাবট্রিতে বড় মান থাকে। এটাই BST-এর মূল নিয়ম।
---