#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    // Node *head;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void reversePrint(Node *&tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(head, tail, 34);
    InsertAtHead(head, tail, 13);
    InsertAtHead(head, tail, 44);
    InsertAtHead(head, tail, 64);
    InsertAtHead(head, tail, 35);
    InsertAtHead(head, tail, 62);
    InsertAtHead(head, tail, 17);
    InsertAtHead(head, tail, 84);
    print(head);
    cout << endl;
    reversePrint(tail);
    // cout << head->data << endl;
    delete head;
    return 0;
}