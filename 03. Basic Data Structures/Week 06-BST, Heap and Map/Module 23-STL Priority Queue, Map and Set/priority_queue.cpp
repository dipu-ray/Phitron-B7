#include <bits/stdc++.h>
using namespace std;

int main() {
    // // Maximum priority queue code...
    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(5);
    // pq.push(30);
    // cout << pq.top() << endl;

    // pq.push(100);
    // cout << pq.top() << endl;

    // // For remove first value in queue
    // pq.pop();
    // pq.pop();
    // cout << pq.top() << endl;



    // Minimum priority queue code...
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;

    pq.push(2);
    cout << pq.top() << endl;

    // For remove first value in queue
    pq.pop();
    pq.pop();
    cout << pq.top() << endl;

    return 0;
}