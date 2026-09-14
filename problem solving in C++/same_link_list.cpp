// problem Statement

// You will be given two singly linked list of integer values as input. You need to check if all the elements of both list are same which means both list are same. If they are same print "YES" otherwise print "NO".

// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// First line will contain the values of the first singly linked list, and will terminate with -1.
// Second line will contain the values of the second singly linked list, and will terminate with -1.
// Constraints

// 1 <= N1, N2 <= 1000; Here N1 and N2 is the maximum number of nodes of the first and second linked list.
// 0 <= V <= 1000; Here V is the value of each node.
// Output Format

// Output "YES" or "NO".
// Sample Input 0

// 10 20 30 40 -1
// 10 20 30 40 -1
// Sample Output 0

// YES
// Sample Input 1

// 10 20 30 40 -1
// 10 20 30 -1
// Sample Output 1

// NO
// Sample Input 2

// 10 20 30 40 -1
// 40 30 20 10 -1
// Sample Output 2

// NO


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

bool isSameList(Node* head1, Node* head2)
{
    Node* temp1 = head1;

    Node* temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {

            return false; 
            
        }

        temp1 = temp1->next;

        temp2 = temp2->next;
    }

    if (temp1 != NULL || temp2 != NULL)
    {

        return false;

    }

    return true;
}

int main()
{
    Node* head1 = NULL;

    Node* tail1 = NULL;

    Node* head2 = NULL;

    Node* tail2 = NULL;

    int value;

    while (cin >> value && value != -1)
    {

        insertAtTail(head1, tail1, value);

    }

    while (cin >> value && value != -1)
    {

        insertAtTail(head2, tail2, value);


    }

    if (isSameList(head1, head2))
    {

        cout << "YES" << endl;


    }

    else
    {

        cout << "NO" << endl;


    }

    return 0;
}