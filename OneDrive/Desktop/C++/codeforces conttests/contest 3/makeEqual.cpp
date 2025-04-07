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
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int balti = 0;
        int l = (accumulate(a, a + n, 0)) / n;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > l)
            {
                balti += a[i] - l;
            }
            else if (a[i] == l)
                continue;
            else
            {
                if (balti >= l - a[i])
                {
                    balti = balti - (l - a[i]);
                    a[i] += l - a[i];
                }
                else
                {
                    count = -1;
                    break;
                }
            }
        }
        if (count == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}