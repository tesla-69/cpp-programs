#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

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

void reverseLL(Node *&head, Node *&tail)
{
    Node *prev = head;
    Node *curr = head->next;
    Node *Head = head;
    while (curr != NULL)
    {
        prev = curr;
        curr = curr->next;
        prev->next = head;
        head = prev;
    }
    Head->next = NULL;
}

int findLenght(Node *&head)
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

Node *reverseInKGroups(Node *&head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    int len = findLenght(head);
    if (k > len)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    for (int i = 0; i < k; i++)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    if (forward != NULL)
        head->next = reverseInKGroups(forward, k);
    return prev;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 34);
    insertAtHead(head, tail, 76);
    insertAtHead(head, tail, 68);
    insertAtHead(head, tail, 21);
    insertAtHead(head, tail, 85);
    insertAtHead(head, tail, 81);
    insertAtHead(head, tail, 92);
    insertAtHead(head, tail, 35);

    print(head);
    cout << endl;
    // reverseLL(head, tail);
    // print(head);

    // Node *prev = NULL;
    // Node *curr = head;
    head = reverseInKGroups(head, 2);
    print(head);
    cout << endl;

    cout << endl;
    delete (head);
    // print(head);
    return 0;
}