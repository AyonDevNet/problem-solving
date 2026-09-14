// Problem Statement

// You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

// Note: You must use singly linked list to solve this problem, otherwise you will not get marks.

// Input Format

// Input will contain the values of the singly linked list, and will terminate with -1.
// Constraints

// 1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
// -10^9 <= V <= 10^9; Here V is the value of each node.
// Output Format

// Output the difference between the maximum and minimum value.
// Sample Input 0

// 2 4 1 5 3 6 -1
// Sample Output 0

// 5
// Sample Input 1

// 2 -1
// Sample Output 1

// 0


#include <iostream>
using namespace std;

class Node
{

public:

    int data;

    Node* next;

    Node(int value)
    {

        data = value;

        next = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int value)
{

    Node* newNode = new Node(value);


    if (head == NULL)
    {

        head = newNode;
        tail = newNode;

        return;

    }


    tail->next = newNode;
    tail = newNode;

}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;


    int value;


    while (cin >> value && value != -1)

    {

        insertAtTail(head, tail, value);

    }

    int maxValue = head->data;
    
    int minValue = head->data;

    Node* temp = head;

    while (temp != NULL)
    {

        if (temp->data > maxValue)

        {

            maxValue = temp->data;

        }

        if (temp->data < minValue)
        {

            minValue = temp->data;

        }


        temp = temp->next;

    }

    cout << (maxValue - minValue) << endl;


    return 0;
}