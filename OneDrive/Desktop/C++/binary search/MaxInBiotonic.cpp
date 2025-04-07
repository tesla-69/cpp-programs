#include <bits/stdc++.h>
using namespace std;

int MaxInBiotin(int a[], int size)
{
    int s = 0;
    int e = size - 1;
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] > a[m + 1] && a[m] > a[m - 1])
            return m;
        else if (a[m] > a[m + 1])
            e = m - 1;
        else if (a[m] > a[m - 1])
            s = m + 1;
    }
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
    int index = MaxInBiotin(a, n);
    cout<<index;

    return 0;
}