#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    vector<int> a;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}