# Date: 02 July, 2025 - Wednesday

## Topics:
- Practice Problem Set: Module 7.5
1. Practice Instructions
2. Solution of Practice Problem 4
3. Insert at head Updated

## Practice Problem Set: Module 7.5
- [Link -](https://docs.google.com/document/d/1EXLsPmtlVXNjdqk49BCcLbPHf0n4UBlP/edit?usp=sharing&ouid=110071013354717279052&rtpof=true&sd=true)
- <img src="./images/practice_problem.png" width="500">
- <img src="./images/practice_problem2.png" width="500">
- <img src="./images/practice_problem3.png" width="500">
- <img src="./images/practice_problem4.png" width="500">
- <img src="./images/practice_problem5.png" width="500">
- <img src="./images/practice_problem6.png" width="500">

## 1. Practice Instructions
- Explanation those whole practice problems `1 to 5`

## 2. Solution of Practice Problem 4
- Solved this problem 04. Program: `practice_problem4.cpp`

## 3. Insert at head Updated
- Program: `practice_problem4.cpp`. This problem have done but also a corner case you can updated.
    - Updated Program: `updated_practice_problem4.cpp`
    - That is the corner case:
        ```
        void insert_at_head(Node* &head, Node* &tail, int value) {
            Node* newNode = new Node(value);

            // That is the corner case
            if(head == NULL) {
                head = newNode;
                tail = newNode;
                return;
            }
            newNode->next = head;
            head = newNode;
        }
        ```
    - We have updated in this `updated_practice_problem4.cpp` program.