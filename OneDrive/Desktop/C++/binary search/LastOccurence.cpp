#include<bits/stdc++.h>
using namespace std;

int lastOccurence(int a[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int m;
    int result = -1;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] == target)
        {
            result = m;
            s = m + 1;
        }
        else if (a[m] > target)
            e = m - 1;
        else
            s = m + 1;
    }
    if (result >= 0)
        return result;
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
    int result = lastOccurence(a, n, x);
    if (result >= 0)
        cout << result;
    else
        cout << "not found";

    return 0;
}