#include<stdio.h>

struct node {
    int data;
    struct node* next;
};

typedef struct node node;

void push (node**head , node** tail, int data){
    node* element = (node*)malloc(sizeof(node));

    element->data=data;
    element->next=NULL;

    if(*head==NULL){
        *head=element ;
    }
    else {
        (*tail)->next =element ;
    }
    (*tail)=element;
}

// void delete (int pos , node** head , node** tail){

// }


int main(){
    node * head=NULL;
    node * tail=NULL;
    

    return 0;
}