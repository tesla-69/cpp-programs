#include <bits/stdc++.h>
using namespace std;

int binarySearchAsc(int a[], int size, int target)
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
            e == m - 1;
        else
            s = m + 1;
    }
    return -1;
}
int binarySearchDesc(int a[], int size, int target)
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
    int result;
    if (a[0] < a[1])
    {
        result = binarySearchAsc(a, n, x);
    }
    if (a[0] > a[1])
    {

        result = binarySearchDesc(a, n, x);
    }
    if (result >= 0)
        cout << result;
    else
        cout << "not found";

    return 0;
}