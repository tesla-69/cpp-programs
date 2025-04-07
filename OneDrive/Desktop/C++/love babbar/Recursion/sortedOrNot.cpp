#include <bits/stdc++.h>
using namespace std;

bool sorted(int a[], int n, int i)
{

    if (i >= n)
    {
        return true;
    }
    if (a[i] < a[i - 1])
        return false;

    sorted(a, n, i + 1);
}

int main()
{
    int a[] = {2};
    bool ans = sorted(a, 1, 1);
    cout << ans;
    return 0;
}