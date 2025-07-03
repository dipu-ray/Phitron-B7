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

// Insert a new node in any position with function
void insert_at_any_position(Node* &head, int index, int value) {
    Node* newNode = new Node(value);
    Node* tmp = head;

    for(int i = 0; i < index-1; i++) {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
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
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    // Called function
    insert_at_any_position(head, 2, 100);
    insert_at_any_position(head, 2, 200);

    // Called function
    print_linked_list(head);

    return 0;
}