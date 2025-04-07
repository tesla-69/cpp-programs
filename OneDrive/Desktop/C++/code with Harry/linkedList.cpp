#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 8;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 2;
    fourth->next = NULL;

    linkedListTraversal(head);

    return 0;
}