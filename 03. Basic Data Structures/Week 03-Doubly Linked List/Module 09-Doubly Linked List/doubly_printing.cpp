#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next;
    Node* previous; // Make a pointer to back to previous

    Node(int value) {
        this->value = value;
        this->next = NULL;
        this->previous = NULL; // Initial to NULL
    }
};

void print_forward(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node* tail) {
    Node* tmp = tail;
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->previous;
    }
    cout << endl;
}

int main() {
    // Create doubly linked list
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    // Connection doubly linked list
    head->next = a;
    a->previous = head;
    a->next = tail;
    tail->previous = a;

    print_forward(head);
    print_backward(tail);

    return 0;
}