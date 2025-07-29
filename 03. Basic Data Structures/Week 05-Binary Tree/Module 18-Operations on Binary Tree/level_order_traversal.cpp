#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Make a level order function with no return type
void level_order(Node* root) {
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        // 1. take out - Ber kore ana
        Node* f = q.front();

        // 2. Working with Node - Oi node niye kaj kora
        cout << f->val << " ";

        // 3. Children push - Children push kora
        if(f->left != NULL) {
            q.push(f->left);
        }
        if(f->right != NULL) {
            q.push(f->right);
        }
    }
}

int main() {
    // Create manually nodes
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    // Make connection with each other nodes
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    return 0;
}