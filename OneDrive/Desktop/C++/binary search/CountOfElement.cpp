#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int a[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int m;
    int first = -1;

    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] == target)
        {
            first = m;
            e = m - 1;
        }
        else if (a[m] > target)
            e = m - 1;
        else
            s = m + 1;
    }
    if (first >= 0)
        return first;
    else
        return -1;
}
int lastOccurence(int a[], int size, int target)
{

    int s = 0;
    int e = size - 1;
    int m;
    int last;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] == target)
        {
            last = m;
            s = m + 1;
        }
        else if (a[m] > target)
            e = m - 1;
        else
            s = m + 1;
    }
    if (last >= 0)
        return last;
    else
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
    int first = firstOccurence(a, n, x);
    int last = lastOccurence(a, n, x);
    if (first >= 0)
        cout << last - first + 1;
    else
        cout << "not found";
    return 0;
}