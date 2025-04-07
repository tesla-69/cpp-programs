#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int d[n + 1];
        d[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            d[i] = a[i] - a[i - 1];
        }
        d[n] = (x - a[n - 1]) * 2;
        cout << *max_element(d, d + n + 1) << endl;
    }
    return 0;
}