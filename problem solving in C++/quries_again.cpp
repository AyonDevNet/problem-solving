// Problem Statement

// You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// You need to insert the value V at index X. Assume that index starts from 0.
// After that for each query you need to print the linked list from left to right and right to left.
// If the index is invalid, then print "Invalid".
// Note: You must use Doubly Linked List, otherwise you will not get marks.

// Input Format

// First line will contain Q.
// Next Q lines will contain X and V.
// Constraints

// 1 <= Q <= 1000;
// 0 <= X <= 1000;
// 0 <= V <= 1000
// Output Format

// For each query print the linked list from left to right and right to left or print "Invalid" as asked.
// Print "L -> " before printing the linked list from left to right.
// Print "R -> " before printing the linked list from right to left.
// Sample Input 0

// 5
// 1 10
// 0 10
// 1 20
// 3 30
// 2 30
// Sample Output 0

// Invalid
// L -> 10 
// R -> 10 
// L -> 10 20 
// R -> 20 10 
// Invalid
// L -> 10 20 30 
// R -> 30 20 10 
// Sample Input 1

// 10
// 0 10
// 1 20
// 0 30
// 1 40
// 6 50
// 0 60
// 4 70
// 4 80
// 2 90
// 1 100
// Sample Output 1

// L -> 10 
// R -> 10 
// L -> 10 20 
// R -> 20 10 
// L -> 30 10 20 
// R -> 20 10 30 
// L -> 30 40 10 20 
// R -> 20 10 40 30 
// Invalid
// L -> 60 30 40 10 20 
// R -> 20 10 40 30 60 
// L -> 60 30 40 10 70 20 
// R -> 20 70 10 40 30 60 
// L -> 60 30 40 10 80 70 20 
// R -> 20 70 80 10 40 30 60 
// L -> 60 30 90 40 10 80 70 20 
// R -> 20 70 80 10 40 90 30 60 
// L -> 60 100 30 90 40 10 80 70 20 
// R -> 20 70 80 10 40 90 30 100 60 


#include <iostream>
using namespace std;

struct Node {
    int val;

    Node* prev;

    Node* next;

    Node(int v) : val(v), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
    Node* head;

    Node* tail;

    int size;

public:
    DoublyLinkedList() {
        head = nullptr;

        tail = nullptr;

        size = 0;
    }

    bool insertAt(int x, int v) {
        if (x < 0 || x > size) {

            return false;

        }

        Node* newNode = new Node(v);

        if (size == 0) {

            head = tail = newNode;
        } else if (x == 0) {

            newNode->next = head;

            head->prev = newNode;

            head = newNode;

        } else if (x == size) {
            newNode->prev = tail;

            tail->next = newNode;

            tail = newNode;
        } else {
            Node* cur = head;

            for (int i = 0; i < x; i++) {

                cur = cur->next;
            }
            Node* p = cur->prev;

            p->next = newNode;

            newNode->prev = p;

        
            newNode->next = cur;


            cur->prev = newNode;
        }


        size++;

        return true;
    }

    void printForward() {
        cout << "L -> ";
        Node* cur = head;

        while (cur != nullptr) {

            cout << cur->val << " ";

            cur = cur->next;
        }
        cout << endl;
    }

    void printBackward() {

        cout << "R -> ";
        
        Node* cur = tail;


        while (cur != nullptr) {

            cout << cur->val << " ";

            cur = cur->prev;
        }
        cout << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int q;

    cin >> q;

    DoublyLinkedList dll;

    while (q--) {
        int x, v;

        cin >> x >> v;

        bool ok = dll.insertAt(x, v);

        if (!ok) {

            cout << "Invalid" << endl;

        } 
        
        else {

            dll.printForward();

            dll.printBackward();
        }
    }

    return 0;
}