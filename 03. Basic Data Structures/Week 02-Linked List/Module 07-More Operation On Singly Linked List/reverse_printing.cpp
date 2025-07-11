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

void print_reverse(int i, int n) {
    // Base case
    if(i > n) {
        return;
    }
    print_reverse(i+1, n);
    cout << i << endl;
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

    print_reverse(head);

    return 0;
}