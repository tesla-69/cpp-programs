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

Node *middleNode(Node *&head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
        }
    }
    return slow;
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

int main()
{
    Node *first = new Node(12);
    Node *second = new Node(15);
    Node *third = new Node(70);
    Node *fourth = new Node(46);
    Node *fifth = new Node(28);
    // Node *sixth = new Node(83);
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // fifth->next = sixth;
    print(first);
    cout << endl;
    Node *middle = middleNode(first);
    cout << middle->data;
    delete(first);
    return 0;
}