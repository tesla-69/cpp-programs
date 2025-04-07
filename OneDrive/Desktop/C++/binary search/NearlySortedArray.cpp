#include <bits/stdc++.h>
using namespace std;

int nearlySortedArray(int a[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] == target)
            return m;
        else if (m - 1 >= 0 && a[m - 1] == target)
            return m - 1;
        else if (m + 1 < size && a[m + 1] == target)
            return m + 1;
        else if (a[m] > target)
            e = m - 1;
        else
            s = m + 1;
    }
    return -1;
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
    int search = nearlySortedArray(a, n, x);
    if (search >= 0)
        cout << search;
    else
        cout << "not found";
    return 0;
}