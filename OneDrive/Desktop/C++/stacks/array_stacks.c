#include <stdio.h>
#define MAX 10

int arr[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("overflow");
        return;
    }
    top++;
    arr[top] = data;
}
void pop()
{
    if (top == - 1)
    {
        printf("underflow");
        return;
    }
    top--;
    return;
}
void front()
{
    printf("%d", arr[top]); printf("\n");
}
void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    front();
    display();
    pop();
    pop();
    front();
    display();
    return 0;
}