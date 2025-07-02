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

// Insert a new node with function
void insert_at_head(Node* &head, int value) {
    Node* newNode = new Node(value); // Create a new node
    newNode->next = head; // Going on next node
    head = newNode; // Assign to head
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
    insert_at_head(head, 100); // 3
    insert_at_head(head, 200); // 2
    insert_at_head(head, 300); // Head 1

    // Called function
    print_linked_list(head);

    return 0;
}