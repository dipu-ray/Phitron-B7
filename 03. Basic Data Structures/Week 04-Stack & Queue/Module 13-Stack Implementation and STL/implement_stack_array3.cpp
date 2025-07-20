#include <bits/stdc++.h>
using namespace std;

class myStack {
public:
    vector<int> v;          // Using STL vector in stack

    // Stack have 5 operations:

    // Push function add into stack
    void push(int val) {
        v.push_back(val);   // Add an element to the end - O(1)
    }

    // Pop function remove from stack top
    void pop() {
        v.pop_back();       // Remove the last element - O(1)
    }

    // Top function for return top into stack
    int top() {
        return v.back();    // Access the last element - O(1)
    }

    // Size function for return stack size
    int size() {
        return v.size();    // Returns the size of the vector - O(1)
    }

    // Empty function for bool return in stack
    bool empty() {
        return v.empty();   // Return true/false if the vector is empty or not - O(1)
    }
};

int main() {
    // Make a object
    myStack st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x); // Push value in stack
    }

    // With while loops
    while(!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    // // With for loops - Build I'm
    // for(int i = 0; i < n; i++) {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

    return 0;
}