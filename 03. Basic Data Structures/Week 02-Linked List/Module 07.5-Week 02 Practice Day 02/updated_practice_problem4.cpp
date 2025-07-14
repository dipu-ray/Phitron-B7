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

// Function - Insert at head
void insert_at_head(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);

    // That is the corner case
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

// Function - Insert at tail
void insert_at_tail(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = tail->next;
    }
}

// Function - Insert at any position
void insert_at_any_position(Node* &head, int index, int value) {
    Node* newNode = new Node(value);
    Node* tmp = head;
    for(int i = 0; i < index - 1; i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

// Function - Print linked list
void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Function - Find the size of linked list
int size_linked_list(Node* head) {
    int count = 0;
    Node* tmp = head;
    while(tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while(true) {
        cin >> value;
        if(value == -1) break;
        insert_at_tail(head, tail, value);
    }

    int idx, val;
    while(cin >> idx >> val) {
        int sz = size_linked_list(head);
        if(idx > sz) {
            cout << "Invalid\n";
            continue;
        }
        else if(idx == sz) {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
        }
        else if(idx == 0) {
            insert_at_head(head, tail, val);
            print_linked_list(head);
        }
        else {
            insert_at_any_position(head, idx, val);
            print_linked_list(head);
        }
    }

    return 0;
}