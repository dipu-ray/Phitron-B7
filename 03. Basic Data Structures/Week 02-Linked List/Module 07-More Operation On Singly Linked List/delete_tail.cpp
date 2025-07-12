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

// Insertion head and tail value by this function
void insert_at_tail(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    // Make connection each other nodes
    tail->next = newNode;
    tail = newNode;
}

// For printing linked lists
void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}

// Functions for delete at head node
void delete_at_tail(Node* head, Node* &tail, int index) {
    Node* tmp = head;
    for(int i = 1; i < index; i++) {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while(true) {
        cin >> value;
        if(value == -1) {
            break;
        }
        insert_at_tail(head, tail, value);
    }

    delete_at_tail(head, tail, 4);
    print_linked_list(head);

    return 0;
}