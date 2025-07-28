#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;     // Make left node
    Node* right;    // Make right node

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(Node* root) {
    if(root == NULL) {
        return;                 // Base Case
    }
    inorder(root->left);       // Go to Left
    cout << root->val << " ";   // Root
    inorder(root->right);      // Go to Right
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

    inorder(root);

    return 0;
}