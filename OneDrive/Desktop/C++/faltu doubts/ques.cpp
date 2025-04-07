#include <iostream>
#include <stack>

bool areIdentical(std::stack<int> &stack1, std::stack<int> &stack2)
{
    if (stack1.size() != stack2.size())
    {
        return false; // Stacks have different sizes, so they cannot be identical.
    }

    while (!stack1.empty())
    {
        if (stack1.top() != stack2.top())
        {
            return false; // The top elements of the stacks are different.
        }
        stack1.pop();
        stack2.pop();
    }

    return true; // Stacks are identical.
}

int main()
{
    std::stack<int> stack1;
    std::stack<int> stack2;

    // Push elements onto stack1
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    // Push the same elements onto stack2
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);

    if (areIdentical(stack1, stack2))
    {
        std::cout << "The stacks are identical." << std::endl;
    }
    else
    {
        std::cout << "The stacks are not identical." << std::endl;
    }

    return 0;
}
