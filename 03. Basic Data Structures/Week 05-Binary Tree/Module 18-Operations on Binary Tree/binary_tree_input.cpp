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

// Make a function for input tree
Node* input_tree() {
    int val;
    cin >> val;
    Node* root;

    // Handle a corner case
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;

    // Check if root != NULL
    if(root) q.push(root);
    while(!q.empty()) {
        // 1. Ber kore ana
        Node* p = q.front();
        q.pop();

        // 2. Oi node ke niye kaj
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. Children push kora
        if(p->left) {
            q.push(p->left);
        }
        if(p->right) {
            q.push(p->right);
        }
    }
    return root;
}

// Make a level order function with no return type
void level_order(Node* root) {
    // Check when Binary Tree is NULL
    if(root == NULL) {
        cout << "No Tree" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        // 1. take out - Ber kore ana
        Node* f = q.front();
        q.pop();

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
    Node* root = input_tree();
    level_order(root);

    return 0;
}