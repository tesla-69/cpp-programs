#include <bits/stdc++.h>
using namespace std;

void insertAtLast(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtLast(s, target);
    s.push(temp);
}

void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int target = s.top();
    s.pop();
    reverse(s);
    insertAtLast(s, target);
}

void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return;
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    print(s);
    reverse(s);
    print(s);

    return 0;
}