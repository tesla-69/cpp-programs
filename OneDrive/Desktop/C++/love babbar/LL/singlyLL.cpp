#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

void deleteLinkedList(Node *head)
{
    Node *current = head;
    Node *next;

    while (current != nullptr)
    {
        next = current->next; // Save the next node
        delete current;       // Delete the current node
        current = next;       // Move to the next node
    }
    head = nullptr; // Ensure the head pointer is null after deletion
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

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    Node *prev = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        prev = prev->next;
    }
    Node *curr = prev->next;
    Node *newNode = new Node(data);
    newNode->next = curr;
    prev->next = newNode;
}

int lengthOfList(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void deleteNode(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
        return;
    }
    // int len = lengthOfList(head);
    // if (pos == len)
    // {
    //     Node *temp = tail;
    // }
    Node *prev = head;
    for (int i = 1; i < pos-1; i++)
    {
        prev = prev->next;
    }
    Node *curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete (curr);
}

int main()
{
    Node *head = new Node(231);
    Node *tail = NULL;
    insertAtHead(head, tail, 34);
    insertAtHead(head, tail, 23);
    insertAtHead(head, tail, 86);
    insertAtHead(head, tail, 64);
    insertAtHead(head, tail, 12);
    insertAtHead(head, tail, 48);
    insertAtHead(head, tail, 67);
    // print(head);

    cout << endl;
    insertAtPosition(head, tail, 87, 3);
    print(head);
    cout << endl;
    // Node *m = head->next;
    // delete head;
    // deleteLinkedList(head);
    // print(m);
    // deleteNode(head, tail, 1);
    print(head);
    // print(m);
    delete head;
    return 0;
}
