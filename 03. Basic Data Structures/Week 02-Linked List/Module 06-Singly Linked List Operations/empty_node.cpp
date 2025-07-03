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
void insert_at_tail(Node* &head, int value) {
    Node* newNode = new Node(value);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }

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
    Node* head = NULL;

    insert_at_tail(head, 40);
    insert_at_tail(head, 50);
    insert_at_tail(head, 60);
    print_linked_list(head);

    return 0;
}