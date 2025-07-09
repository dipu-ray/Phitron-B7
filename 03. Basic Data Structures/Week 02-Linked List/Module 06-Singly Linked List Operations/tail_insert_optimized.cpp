#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next; 

    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

// Insert a new node at tail with function
void insert_at_tail(Node* &head, Node* &tail, int value) {
    // Create a new node
    Node* newNode = new Node(value);

    // Handle corner case with conditions
    if(head == NULL) {
        head = newNode;
        return;
    }

    // Make connections
    tail->next = newNode;
    tail = tail->next;
}

// For printing linked lists
void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30); // Make a tail node

    head->next = a;
    a->next = tail;

    // value assign
    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 50);
    insert_at_tail(head, tail, 60);

    // Called function
    print_linked_list(head);

    return 0;
}