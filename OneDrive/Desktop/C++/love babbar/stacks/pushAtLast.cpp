#include <bits/stdc++.h>
using namespace std;

void pushAtStart(stack<int> &s, int target)
{
    if (s.size() == 1)
    {
        int temp = s.top();
        s.pop();
        s.push(target);
        s.push(temp);
        return;
    }
    int tem = s.top();
    s.pop();
    pushAtStart(s, target);
    s.push(tem);
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
    int target = s.top();

    s.pop();

    pushAtStart(s, target);
    print(s);

    return 0;
}