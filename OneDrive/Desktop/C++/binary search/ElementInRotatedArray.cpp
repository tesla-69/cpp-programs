#include <bits/stdc++.h>
using namespace std;

int smallestElementIndex(int a[], int size)
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
}
int binarySearch(int a[], int s, int e, int target)
{

    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;

        if (a[m] == target)
            return m;
        else if (a[m] < target)
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
    int x;
    cin >> x;
    int index = smallestElementIndex(a, n);
    int final1 = binarySearch(a, 0, index - 1, x);
    int final2 = binarySearch(a, index, n - 1, x);
    if (final1 >= 0)
        cout << final1;
    else if (final2 >= 0)
        cout << final2;
    else
        cout << "not found";
    return 0;
}