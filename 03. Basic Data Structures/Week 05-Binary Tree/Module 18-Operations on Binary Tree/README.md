# Date: 27 July, 2025 - Sunday

## Topics:
0. Introduction
1. Level order traversal Theory
2. Level order traversal Implementation
3. Level order traversal Animated
4. Binary tree input Theory
5. Binary tree input Implementation
6. Binary tree input Animated
7. Count nodes in a binary tree
8. Count leaf nodes in a binary tree
9. Count leaf nodes simulation
- Quiz: Module 18
- Extra Practice Problem and Quiz Explanation
- Feedback Form: Module 18

## 0. Introduction
- Binary Tree Operations
- Level Order Traversal
- Binary Tree Input
- Counting nodes in Binary Tree - With `Recursive`
- Counting Leaf Nodes - With `Recursive`
- Maximum Height of a Binary Tree - With `Recursive`

## 1. Level order traversal Theory
- Understand `Level order traversal theory` with drawing:
    - <img src="./images/drawing.png" width="500">
    - <img src="./images/drawing2.png" width="500">
- Rules of `Level order traversal theory`:
    - `Take out`
    - `Working with Node`
    - `Children push`
    - <img src="./images/drawing3.png" width="500">
- `Queue` with non-linear data structure help to level order.

## 2. Level order traversal Implementation
- Program: `level_order_traversal.cpp`

## 3. Level order traversal Animated
- Explanation those code with animated way:
    ```
    void level_order(Node* root) {
        if(root == NULL) {
            cout << "No Tree" << endl;
            return;
        }

        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            Node* f = q.front();
            q.pop();

            cout << f->val << " ";

            if(f->left != NULL) {
                q.push(f->left);
            }
            if(f->right != NULL) {
                q.push(f->right);
            }
        }
    }
    ```

## 4. Binary tree input Theory
- Example 1:
    - <img src="./images/drawing4.png" width="500">
- Example 2:
    - <img src="./images/drawing5.png" width="500">

## 5. Binary tree input Implementation
- Program: `binary_tree_input.cpp`

## 6. Binary tree input Animated
- Explanation those code with animated way:
    ```
    Node* input_tree() {
        int val;
        cin >> val;
        Node* root;

        if(val == -1) root = NULL;
        else root = new Node(val);
        queue<Node*> q;

        if(root) q.push(root);
        while(!q.empty()) {
            // 1. Ber kore ana
            Node* p = q.front();
            q.pop();

            // 2. Oi node ke niye kaj
            int l, r;
            cin >> l >> r;
            Node *myLeft, *myRight;

            if(l == -1) myLeft = NULL;
            else myLeft = new Node(l);
            if(r == -1) myRight = NULL;
            else myRight = new Node(r);

            p->left = myLeft;
            p->right = myRight;

            // 3. Children push kora
            if(p->left) {
                q.push(p->left);
            }
            if(p->right) {
                q.push(p->right);
            }
        }
        return root;
    }
    ```

## 7. Count nodes in a binary tree
- <img src="./images/drawing6.png" width="500">
- Count nodes using with `Recursion`
- Program: `count_nodes.cpp`

## 8. Count leaf nodes in a binary tree
- Leaf nodes means they haven't children.
- <img src="./images/drawing7.png" width="500">
- Program: `count_leaf_nodes.cpp`

## 9. Count leaf nodes simulation
- Explanation this code with simulation:
    ```
    int count_leaf_nodes(Node* root) {
        if(root == NULL) {
            return 0;
        }
        if(root->left == NULL && root->right == NULL) {
            return 1;
        }
        int l = count_leaf_nodes(root->left);
        int r = count_leaf_nodes(root->right);
        return l + r;
    }
    ```

## Quiz: Module 18
- `Total Questions: 10`
- `Total Marks: 10`

## Extra Practice Problem and Quiz Explanation
- [Quiz Explanation:](https://docs.google.com/document/d/1ZN-xP1ejpmekpVWW2gida9pU8IsbhBZ4FUhUyoWiUio/edit?usp=sharing)
- [Extra Practice Problem (Optional):](https://docs.google.com/document/d/1bvnxY4f-Z2NOTm2v0FdYhB5hgdfW6G_FqX_-bd_mQ00/edit?usp=sharing)
#### 1. What is level order traversal of a binary tree?
**a)** Visiting nodes in ascending order  
**b)** Visiting nodes in descending order  
**c)** Visiting nodes level by level, from left to right ✅  
**d)** Visiting nodes randomly
> **Explanation:** Binary Tree-এর Level Order Traversal বলতে বোঝানো হয় একটি ট্রি-র নোডগুলোকে লেভেল বাই লেভেল ভিজিট করা। অর্থাৎ প্রথমে রুট নোড, তারপর দ্বিতীয় লেভেলের সমস্ত নোড (বাম দিক থেকে ডান দিকে), এরপর তৃতীয় লেভেলের নোড, এভাবে একে একে প্রতিটি লেভেল ভিজিট করা হয়।
---
#### 2. Which data structure is typically used to implement level order traversal?
**a)** Stack  
**b)** Queue ✅  
**c)** Array  
**d)** Linked list
> **Explanation:** Level Order Traversal সাধারণত Queue ডেটা স্ট্রাকচার ব্যবহার করে ইমপ্লিমেন্ট করা হয়। Queue নোডগুলোকে সঠিক ক্রমানুসারে (লেভেল বাই লেভেল) প্রক্রিয়া করতে সাহায্য করে যা মডিউলে দেখানো হয়েছে।
---