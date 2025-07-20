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

    // Push some value in stack
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Before pop: " << st.top() << endl;
    st.pop();
    cout << "After first pop: " <<  st.top() << endl;
    st.pop();
    cout << "After second pop: " <<  st.top() << endl;

    // There have a corner case
    // Windows will show garbage value and online judge with runtime error or segmentation fault
    st.pop();

    // Solve this corner case with conditions
    // Check stack are not empty
    // Shortcut with not empty: if(!st.empty())
    if(st.empty() == false) {
        cout << "After third pop: " <<  st.top() << endl;
    }
    if(st.empty() == false) {
        st.pop();
    }

    return 0;
}