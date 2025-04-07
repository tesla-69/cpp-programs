#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

vector<int> nextLargerNodes(ListNode *head)
{
    ListNode *temp = head;
    vector<int> arr;
    while (temp != NULL)
    {
        arr.push_back(temp->val);
        temp = temp->next;
    }
    int n = arr.size();

    for (auto it : arr)
        cout << it << " ";
    cout << endl;
    stack<int> st;
    st.push(0);
    vector<int> ans(n);
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout<<"Printing stack:";
        print(st);
        int curr = arr[i];
        cout << curr << endl;
        if (st.top() == 0)
        {
            ans[i] = st.top();
            st.push(arr[i]);
        }
        else
        {
            while (st.top() < curr)
            {
                if (st.top() == 0)
                {
                    break;
                }
                st.pop();
            }

            ans[i] = st.top();
            st.push(curr);
        }
    }
    return ans;
}

int main()
{
    ListNode *head = new ListNode(2);
    ListNode *second = new ListNode(1);
    ListNode *third = new ListNode(5);
    head->next = second;
    second->next = third;
    vector<int> ans = nextLargerNodes(head);
    for (auto it : ans)
        cout << it << " ";
    cout << endl;

    delete head;
    return 0;
}