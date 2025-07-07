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

void insert_head(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head->previous = newNode;
    head = newNode;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->previous = head;

    a->next = b;
    b->previous = a;

    insert_head(head, 100);
    insert_head(head, 200);
    print_forward(head);

    return 0;
}