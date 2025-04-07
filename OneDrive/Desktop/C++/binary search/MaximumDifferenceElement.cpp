#include <bits/stdc++.h>
using namespace std;

int maxmimumDifference(int a[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] == target)
            return 0;
        else if (a[m] < target)
            s = m + 1;
        else
            e = m - 1;
    }
    return min(abs(target - a[s]), abs(target - a[e]));
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
    int diff = maxmimumDifference(a, n, x);
    cout << diff;

    return 0;
}