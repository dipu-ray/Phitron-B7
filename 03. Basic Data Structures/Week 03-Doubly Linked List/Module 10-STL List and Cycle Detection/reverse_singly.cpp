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

void insert_at_tail(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}

// Reverse function with recursion
void reverse_linked_list(Node* &head, Node* &tail, Node* tmp) {
    if(tmp->next == NULL) {
        head = tmp; // move to head -> tail
        return;
    }
    // Call to recursion
    reverse_linked_list(head, tail, tmp->next);
    // Code or connections after the recursion
    tmp->next->next = tmp;
    tmp->next = NULL;
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

    reverse_linked_list(head, tail, head);
    print_linked_list(head);

    return 0;
}