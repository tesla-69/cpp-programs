#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        cout << abs(a[0] - a[n - 1]) + abs(a[1] - a[n - 1]) + abs(a[1] - a[n - 2]) + abs(a[0] - a[n - 2]) << endl;
    }
    return 0;
}