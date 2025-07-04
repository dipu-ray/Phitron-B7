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

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    // cout << head->value << endl;
    // cout << head->next->value << endl;
    // cout << head->next->next->value << endl;
    // cout << head->next->next->next->value << endl;

    // Don't move to null a Head pointer with tmp pointer
    Node* tmp = head;

    // cout with loops
    while(tmp != NULL) {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }

    // One more print
    tmp = head;
    while(tmp != NULL) {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }

    return 0;
}