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
- Duplicate value are not stored in Queue:
    - <img src="./images/drawing11.png" width="500">
    - <img src="./images/drawing12.png" width="500">

## 9. BFS traversal implementation
- Program: `bfs.cpp`

## 10. BFS Traversal Animated
- Explanation those code in this video with animated way:
    ```
    void bfs(int src) {
        queue<int> q;
        q.push(src);
        vis_arr[src] = true;

        while(!q.empty()) {
            // Ber kore ana
            int parent = q.front();
            q.pop();
            // Oi node ke niye kaj
            cout << parent << " ";
            // Children gulo push kora
            for(int child : adj_list[parent]) {
                if(vis_arr[child] == false) {
                    q.push(child);
                    vis_arr[child] = true;
                }
            }
        }
    }
    ```

## 11. Complexity Analysis of BFS
- Find out `Time Complexity` and `Space Complexity` of this code:
    ```
    void bfs(int src) {
        queue<int> q;
        q.push(src);
        vis_arr[src] = true;

        while(!q.empty()) {
            int parent = q.front();
            q.pop();
            cout << parent << " ";
            for(int child : adj_list[parent]) {
                if(vis_arr[child] == false) {
                    q.push(child);
                    vis_arr[child] = true;
                }
            }
        }
    }
    ```
- <img src="./images/drawing13.png" width="500">
- Node have 500 and edge have 2, edge have 1000 and node have 50. That's why `O(N+E)`

## Quiz: Module 02
- `Total Questions: 10`
- `Total Marks: 10`

## Extra Practice Problem and Quiz Explanation
- [Quiz Explanation:](https://docs.google.com/document/d/1OnDcOECydNTe0yOf0BTuAbNRBguysXHu/edit?usp=sharing&ouid=110071013354717279052&rtpof=true&sd=true)
- [Extra Practice Problem (Optional):](https://docs.google.com/document/d/1yv6zXh9cGeP0owXS71hF_YZlzU8yPAq9fJNcfkC715A/edit?usp=sharing)
#### 1. What does BFS stand for?
**a)** Best-First Search  
**b)** Breadth-First Search ✅  
**c)** Binary-First Search  
**d)** Backward-First Search
> **Explanation:** BFS stands for Breadth First Search।
---
#### 2. Which graph representation is suitable to know if a node is connected with another node?
**a)** Adjacency Matrix ✅  
**b)** Adjacency List  
**c)** Edge List  
**d)** Both Adjacency List and Adjacency Matrix
> **Explanation:** Adjacency Matrix এর সাহায্যে আমরা খুব সহজেই বের করতে পারি দুটি নোড একে অন্যের সাথে কানেক্টেড আছে কিনা। এটি বের করার টাইম কমপ্লেক্সিটি O(1)।
---
#### 3. Which graph representation is suitable to know how many nodes are connected with a certain node?
**a)** Adjacency List ✅  
**b)** Adjacency Matrix  
**c)** Edge List  
**d)** Both Adjacency List and Adjacency Matrix
> **Explanation:** Adjacency List ব্যবহার করলে আমরা খুব সহজেই একটি নোডের সাথে ঠিক কতোগুলো নোড কানেক্টেড তা বের করতে পারি O(1) টাইম কমপ্লেক্সিটিতে। adjacency_list এ প্রত্যেক Node এর সাথে কারা কানেক্টেড তার জন্যে ভেক্টর থাকে। ঐ ভেক্টরের সাইজ-ই বলে দিবে Node টির সাথে কতোগুলো Node কানেক্টেড।
---
#### 4. In BFS, when does a node get marked as "visited"?
**a)** Before it is enqueued  
**b)** After it is dequeued  
**c)** Before it is dequeued  
**d)** After it is enqueued ✅
> **Explanation:** BFS-এ কোনো নোড Queue তে রাখা (enqueue) পরই "visited" হিসেবে চিহ্নিত করা হয়, যাতে কোনো নোড পুনরায় Queue-তে না যোগ হয় এবং infinity loop এড়ানো যায়।
---
#### 5. Which of the following is true about BFS in terms of the order of nodes visited?
**a)** Siblings are always visited before children  
**b)** Children are always visited before siblings  
**c)** Nodes at the same level can be visited in any order depending on implementation ✅  
**d)** Descendants are visited before ancestors
> **Explanation:** BFS এ একই স্তরের নোডগুলো আগে visit করে, তবে সেগুলোর ক্রম Queue-এর implementation এর উপর নির্ভর করে যেকোনো হতে পারে।
---
#### 6. What will be the bfs traversal of the graph below if the source is 0?
- <img src="./images/mcq.png" width="300">
**a)** 0->3->4->5->6->2->1  
**b)** 0->1->2->3->6->4->5 ✅  
**c)** 0->1->2->3->4->5->6  
**d)** 0->1->3->2->6->4->5
> **Explanation:** প্রথমে root নোড 0 visit করবে। তারপর 0 এর children গুলো  1,2 visit করবে। তারপর 1 এবং 2 এর children 3 ও 6 visit করবে। তারপর 3 এর children 4 ও 5 visit করবে।
---
#### 7. What will be the level of node 4, if the source is 0?
- <img src="./images/mcq2.png" width="300">
**a)** 3  
**b)** 0  
**c)** 1 ✅  
**d)** 2
> **Explanation:** BFS এ নোড 0 বা source নোড এর সাথে  সরাসরি সংযুক্ত নোডগুলোর লেভেল 1 হয়। এখানে, নোড 4 সরাসরি নোড 0-এর সাথে যুক্ত, তাই নোড 4-এর লেভেল 1।
---
#### 8. In BFS, what is the strategy for selecting the next node to explore?
**a)** LIFO (Last-In, First-Out)  
**b)** Random selection  
**c)** FIFO (First-In, First-Out) ✅  
**d)** Priority queue
> **Explanation:** BFS-এ পরবর্তী নোড নির্বাচনের জন্য Queue (FIFO) পদ্ধতি অনুসরণ করা হয়, অর্থাৎ প্রথমে যে নোডটি Queue তে রাখা হয়েছে, সেটি আগে explore হবে।
---
#### 9. What is the time complexity of BFS for an unweighted graph with V vertices and E edges?
**a)** O(V)  
**b)** O(E)  
**c)** O(V + E) ✅  
**d)** O(log V)
> **Explanation:** BFS এর time complexity হচ্ছে O(V + E) (মডিউলে ভালোভাবে বুঝানো হয়েছে)।
---
#### 10. What is the space complexity of BFS in the worst case scenario?
**a)** O(logV)  
**b)** O(V^2)  
**c)** O(V) ✅  
**d)** O(V+E)
> **Explanation:** BFS-এ  worst case এ সকল নোড Queue তে একইসাথে থাকতে পারে, তাই space complexity O(V) হয়।
---
### Extra Practice Problem (Optional):
- <img src="./images/extra_practice.png" width="500">

## Feedback Form
- মডিউল রিলেটেড তোমার যে কোন ফিডব্যাক থাকলে এই ফর্মে লিখে দিতে পারো। আমরা তোমার ফিডব্যাক গুরুত্বসহকার দেখব।
- [Form Links](https://forms.gle/DH5mjuGD1x2EZ4z29)