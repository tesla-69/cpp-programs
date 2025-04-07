#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int s, int e)
{
    int index;
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] == 1)
        {
            index = m;
            e = m - 1;
        }
        else if (a[m] < 1)
            s = m + 1;
        else
            e = m - 1;
    }
    return m;
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
    int s = 0;
    int e = 1;

    while (a[e] <= 1)
    {
        s = e;
        e = e * 2;
    }

    int index = binarySearch(a, s, e);
    cout << index;
    return 0;
}