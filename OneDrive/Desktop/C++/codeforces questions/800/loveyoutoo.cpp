#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = a[0];
    int mn = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] == mx)
            continue;
        if (a[i] == mn)
            continue;
        mx = max(a[i], mx);
        if (a[i] == mx)
            count++;
        mn = min(a[i], mn);
        if (mn == a[i])
            count++;
    }
    cout << count;
    return 0;
}