#include <bits/stdc++.h>
using namespace std;

int arrayRotations(int a[], int size)
{
    int s = 0;
    int e = size - 1;
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        int prev = (m + size - 1) % size;
        int next = (m + 1) % size;
        if (a[m] < a[prev] && a[m] < a[next])
            return m;
        else if (a[m] >= a[s])
            s = m + 1;
        else
            e = m - 1;
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
    int index = arrayRotations(a, n);
    cout << n - index;

    return 0;
}