#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz;

    void push(int val) {    // Complexity O(1)
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop() {            // Complexity O(1)
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail == NULL) {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top() {             // Complexity O(1)
        return tail->val;
    }
    int size() {            // Complexity O(1)
        return sz;
    }
    bool empty() {          // Complexity O(1)
        if(head == NULL) {
            return true;
        }
        else {
            return false;
        }
        // Shortcut for if-else "return head == NULL"
    }
};

int main() {
    myStack st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}