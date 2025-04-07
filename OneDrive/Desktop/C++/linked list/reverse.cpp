#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node * next;
};
typedef struct node node;

void reverse (node**head){
    node* current = *head;
    node* prev=NULL;
    node* next=NULL;

    while (current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
    return ;
}

void print(node**head){
    node*ptr=*head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
    return;
}

int main()
{
    node* head = (node*)malloc(sizeof(node));
    node* first = (node*)malloc(sizeof(node));
    node* second = (node*)malloc(sizeof(node));
    node* third = (node*)malloc(sizeof(node));
    node* fourth = (node*)malloc(sizeof(node));

    head->data=1;
    head->next=first;
    first->data=3;
    first->next=second;
    second->data=4;
    second->next=third;
    third->data=5;
    third->next=fourth;
    fourth->data=6;
    fourth->next=NULL;

    print(&head);
    reverse (&head);
    print(&head);
    

    return 0;
}