#include <bits/stdc++.h>
using namespace std;

int ceilOfElement(int a[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] == target)
            return m;
        else if (a[m] > target)
            e = m - 1;
        else
            s = m + 1;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int ceil = ceilOfElement(a, n, x);
    cout << ceil;
    return 0;
}