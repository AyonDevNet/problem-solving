
// Problem Statement
// There is a list of values that were inserted into a stack and a list of values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.
// Note: You cannot use any here. You need to implement the stack and queue by yourself. You can use linked list or array to implement the stack and queue as you want.
// Input Format

// * First line will contain and .
// * Second line will contain stack with values.
// * Third line will contain queue with values.

// Constraints

// 1. 
// 2. 

// Output Format

// * Output YES if they were same, otherwise NO.

// Sample Input 0

// ```
// 5 5
// 10 20 30 40 50
// 50 40 30 20 10

// ```

// Sample Output 0

// ```
// YES

// ```

// Sample Input 1

// ```
// 4 4
// 10 20 30 40
// 10 20 30 40

// ```

// Sample Output 1

// ```
// NO

// ```

// Sample Input 2

// ```
// 5 4
// 1 2 3 4 5
// 5 4 3 2

// ```

// Sample Output 2

// ```
// NO




// must be : Note: You cannot use any STL here. You need to implement the stack and queue by yourself. You can use linked list or array to implement the stack and queue as you want.

#include <iostream>
using namespace std;

const int MAXN = 1000005;

class MyStack {
    int arr[MAXN];

    int topIndex;

public:
    MyStack() {

        topIndex = -1;
    }

    void push(int x) {

        arr[++topIndex] = x;
    }

    int pop() {

        return arr[topIndex--];
    }

    bool isEmpty() {
        
        return topIndex == -1;
    }
};

class MyQueue {
    int arr[MAXN];

    int frontIndex;

    int rearIndex;

public:

    MyQueue() {

        frontIndex = 0;

        rearIndex = -1;
    }

    void push(int x) {

        arr[++rearIndex] = x;


    }

    int pop() {


        return arr[frontIndex++];
    }

    bool isEmpty() {

        return frontIndex > rearIndex;
    }
};


int main() {

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);


    int n, m;
    cin >> n >> m;

    MyStack st;

    MyQueue qu;

    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;


        st.push(x);
    }

    for (int i = 0; i < m; i++) {
        int x;

        cin >> x;

        qu.push(x);
    }

    bool same = (n == m);

    while (!st.isEmpty() && !qu.isEmpty()) {

        int stackVal = st.pop();

        int queueVal = qu.pop();

        if (stackVal != queueVal) {

            same = false;
        }
    }

    while (!st.isEmpty()) st.pop();

    while (!qu.isEmpty()) qu.pop();

    cout << (same ? "YES" : "NO") << endl;

    return 0;
}