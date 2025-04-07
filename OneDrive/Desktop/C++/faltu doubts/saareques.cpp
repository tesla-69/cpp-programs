#include <iostream>

using namespace std;

const int INITIAL_CAPACITY = 10;

int *createStack(int &capacity, int &top)
{
    capacity = INITIAL_CAPACITY;
    top = -1;
    return new int[capacity];
}

void push(int *&stack, int &capacity, int &top, int value)
{
    if (top == capacity - 1)
    {
        int newCapacity = capacity * 2;
        int *newStack = new int[newCapacity];
        for (int i = 0; i <= top; i++)
        {
            newStack[i] = stack[i];
        }
        delete[] stack;
        stack = newStack;
        capacity = newCapacity;
    }
    stack[++top] = value;
}

void pop(int &top)
{
    if (top >= 0)
    {
        top--;
    }
    else
    {
        cout << "Stack is empty. Cannot pop." << endl;
    }
}

int peek(const int *stack, int top)
{
    if (top >= 0)
    {
        return stack[top];
    }
    else
    {
        cout << "Stack is empty." << endl;
        return -1;
    }
}

bool isEmpty(int top)
{
    return top == -1;
}

int main()
{
    int capacity, top;
    int *stack = createStack(capacity, top);

    push(stack, capacity, top, 1);
    push(stack, capacity, top, 2);
    push(stack, capacity, top, 3);

    cout << "Top Element: " << peek(stack, top) << endl;
    pop(top);

    cout << "Top Element after Pop: " << peek(stack, top) << endl;
    push(stack, capacity, top, 4);

    cout << "Is Stack Empty? " << (isEmpty(top) ? "Yes" : "No") << endl;

    delete[] stack;

    return 0;
}