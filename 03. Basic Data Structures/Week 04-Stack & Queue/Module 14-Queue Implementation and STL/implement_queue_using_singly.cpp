#include <bits/stdc++.h>
using namespace std;

// Using singly linked list
class Node {
public:
    int value;
    Node* next; 
    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

// Make queue data structure
class myQueue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    // Push into Queue
    void push(int val) {        // O(1)
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    // Pop front into Queue
    void pop() {                // O(1)
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL) {
            tail = NULL;
        }
    }

    // Access to front value from Queue
    int front() {               // O(1)
        return head->value;
    }

    // Access to back value from Queue
    int back() {                // O(1)
        return tail->value;
    }

    // Size in Queue
    int size() {                // O(1)
        return sz;
    }

    // Empty in Queue
    bool empty() {              // O(1)
        // shortcut conditions
        return head == NULL;
    }
};

int main() {

    return 0;
}