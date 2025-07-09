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

void delete_at_head(Node* &head, Node* &tail) {
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL) {
        tail = NULL;
        return;
    }
    head->previous = NULL;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->previous = head;

    a->next = tail;
    tail->previous = a;

    delete_at_head(head, tail);
    delete_at_head(head, tail);
    print_forward(head);

    return 0;
}