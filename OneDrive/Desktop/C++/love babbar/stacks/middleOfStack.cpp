#include <bits/stdc++.h>
#include <stack>
using namespace std;

void middle(stack<int> &s, int &size)
{

    if (s.size() == size / 2 + 1)
    {
        cout << s.top();
        return;
    }

    int temp = s.top();
    s.pop();
    middle(s, size);
    s.push(temp);
}

int main()
{
    stack<int> s;
    s.push(23);
    s.push(23);
    s.push(565);
    s.push(23);
    s.push(23);

    int size = s.size();

    middle(s, size);

    // cout << mid;
    return 0;
}