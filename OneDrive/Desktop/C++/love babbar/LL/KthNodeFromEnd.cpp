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

void reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head=prev;
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

Node *KthNodeFromEnd(Node *&head, int k)
{
    if (head == NULL)
        return NULL;

    reverse(head);

    Node *temp = head;
    for (int i = 0; i < k; i++)
    {
        temp = temp->next;
    }
    return temp;
}

int main()
{
    Node *first = new Node(12);
    Node *second = new Node(13);
    Node *third = new Node(14);
    Node *fourth = new Node(15);
    Node *fifth = new Node(16);
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    print(first);
    cout << endl;

    int k;
    cin >> k;

    Node *ans = KthNodeFromEnd(first, k);

    print(first);
    cout << endl;

    cout << ans->data;
    delete first;
    return 0;
}