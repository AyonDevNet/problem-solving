// Problem Statement

// You have a singly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// If X is 0 that means you will insert the value V to the head of the linked list.
// If X is 1 then you will insert the value V to the tail of the linked list.
// If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
// After each query you need to print the linked list.
// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// First line will contain Q.
// Next Q lines will contain X and V.
// Constraints

// 1 <= Q <= 1000;
// 0 <= X <= 2;
// 0 <= V <= 10^9
// Output Format

// For each query ouput the updated linked list.
// Sample Input 0

// 4
// 0 10
// 1 20
// 1 30
// 0 40
// Sample Output 0

// 10 
// 10 20 
// 10 20 30 
// 40 10 20 30 
// Sample Input 1

// 11
// 0 10
// 2 5
// 1 20
// 1 30
// 0 40
// 2 0
// 0 50
// 2 2
// 1 60
// 2 3
// 2 3
// Sample Output 1

// 10 
// 10 
// 10 20 
// 10 20 30 
// 40 10 20 30 
// 10 20 30 
// 50 10 20 30 
// 50 10 30 
// 50 10 30 60 
// 50 10 30 
// 50 10 30 
// Sample Input 2

// 10
// 1 4
// 2 1
// 0 9
// 0 10
// 2 2
// 1 5
// 2 0
// 2 1
// 2 5
// 2 2
// Sample Output 2

// 4 
// 4 
// 9 4 
// 10 9 4 
// 10 9 
// 10 9 5 
// 9 5 
// 9 
// 9 
// 9 

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

void insertAtHead(Node* &head, Node* &tail, int value)
{
    Node* newNode = new Node(value);

    if (head == NULL)
    {
    
    
        head = tail = newNode;
    
        return;
    }

    newNode->next = head;
    head = newNode;

}

void insertAtTail(Node* &head, Node* &tail, int value)
{
    Node* newNode = new Node(value);


    if (head == NULL)
    {
    
        head = tail = newNode;
    
        return;
    }

    tail->next = newNode;
    
    tail = newNode;
}

void deleteAtIndex(Node* &head, Node* &tail, int index)
{
    if (head == NULL || index < 0)
    
    return;

    if (index == 0)
    {
    
        Node* delNode = head;
    
         head = head->next;

         if (head == NULL)
        {
        
            tail = NULL;
        }

        
        delete delNode;
        
        return;
    }

    Node* temp = head;

    for (int i = 0; i < index - 1; i++)
    {
        if (temp == NULL)
            return;
        
            temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
        
    return;

    Node* delNode = temp->next;

    temp->next = delNode->next;

    if (delNode == tail)
    {

        tail = temp;
    
    }


    delete delNode;
}

void printList(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
    
        temp = temp->next;
    }

    
    cout << endl;
}

int main()
{
    int q;
    
    cin >> q;

    Node* head = NULL;
    
    Node* tail = NULL;

    while (q--)
    {
    
        int x, v;
    
        cin >> x >> v;

        if (x == 0)
    
        insertAtHead(head, tail, v);
    
        else if (x == 1)
            insertAtTail(head, tail, v);

    
        else if (x == 2)

    
            deleteAtIndex(head, tail, v);


            printList(head);
    }

    
    return 0;
}