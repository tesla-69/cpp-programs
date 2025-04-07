#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void deletion(node*head){
    node*ptr=head;
    while(ptr->next->next->next!=NULL){
        ptr=ptr->next;
    }
    node*prev=head;
    while(prev->next!=ptr){
        prev=prev->next;
    }
    prev->next=ptr->next;
}

node *newNode(node *&head, int val)
{
    if (head == NULL)
    {
        node *n = new node;
        n->data = val;
        n->next = NULL;
        head = n;
        return head;
    }
    node *n = new node;
    
    n->data = val;
    n->next = NULL;
    node*ptr=head;
    
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=n;
    return n;
}

node* nodeInBetween(node*head){
    node*ptr=head;
    int n=0;
    while (ptr != NULL)
    {
        n++;
        ptr = ptr->next;
    }
    for(int i=0 ; i < (n/2) + 2 ; i++){
        if(i=(n/2)+1){
        node*m=new node;

        }
    }
}

void display(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main()
{
    node *head = NULL;
    newNode(head, 8);
    display(head);
    newNode(head, 5);
    display(head);
    newNode(head, 9);
    display(head);
    newNode(head, 1);
    newNode(head, 4);
    display(head);
    deletion(head);
    display(head);
    return 0;
}