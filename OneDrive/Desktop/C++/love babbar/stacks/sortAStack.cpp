#include<bits/stdc++.h>
using namespace std;

void insertSorted(stack<int> &s, int &target){
    if(s.empty()) {
        s.push(target);
        return;
    }
    
    if(s.top()>=target) {
        s.push(target);
        return;
    }

    int temp=s.top();
    s.pop();
    insertSorted(s,target);
    s.push(temp);
}

void sortStack(stack<int> &s){
    if(s.empty()) return;

    int temp=s.top();
    s.pop();
    sortStack(s);
    insertSorted(s,temp);
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
    s.push(23);
    s.push(2);
    s.push(243);
    s.push(37);
    s.push(0);
    print (s);
    sortStack(s);
    print (s);


    return 0;
}