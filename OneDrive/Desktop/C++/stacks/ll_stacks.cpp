#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node * next;
};

node* push (node*head,int data){
    if(head==NULL){
        node*ptr=new node;
        ptr->data=data;
        ptr->next=NULL;
        head=ptr;
        return head;
    }
    node* ptr=new node;
    ptr->data=data;
    ptr->next=NULL;

    
    head=ptr;
    return head;
}
void display(node *head){
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr=ptr->next;
    }
}

int main()
{
    node*head=NULL;
    
    push(head,7);
    push(head,1);
    push(head,2);
    push(head,3);
    push(head,45);
    push(head,5);

    display(head);
    

}