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

void insert_tail(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value); // Make new node

    // When node was empty
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->previous = tail;
    tail = newNode;
}

void reverse_doubly(Node* head, Node* tail) {
    for(Node *i=head,*j=tail; i!=j && i->previous!=j; i=i->next,j=j->previous) {
        swap(i->value, j->value);
    }
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
        insert_tail(head, tail, value);
    }

    reverse_doubly(head, tail);
    print_forward(head);

    return 0;
}