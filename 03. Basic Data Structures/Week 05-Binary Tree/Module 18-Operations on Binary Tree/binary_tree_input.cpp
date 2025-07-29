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

void input_tree() {
    int val;
    cin >> val;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

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
}

int main() {

    return 0;
}