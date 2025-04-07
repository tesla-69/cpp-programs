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
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int i = 2;
        // int j = n;
        // while (i <= n - 1)
        // {
        //     if (a[i - 1] != 0)
        //     {
        //         a[i - 1] = a[i - 1] - 1;
        //         a[i] = a[i] - 2;
        //         a[i + 1] = a[i + 1] - 1;
        //         // cout << a[i] << " ";
        //     }
        //     if (a[i] < 0)
        //     {
        //         // cout << a[i] << " ";
        //         break;
        //     }
        //     if (a[i - 1] == 0)
        //     {
        //         i++;
        //         // cout << a[i] << " ";
        //     }
        // }

        for (int i = 2; i < n; i++)
        {
            if (a[i - 1] <= a[i + 1] && a[i] >= 2 * a[i - 1])
            {
                a[i] = a[i] - 2 * a[i - 1];
                a[i + 1] = a[i + 1] - a[i - 1];
                a[i - 1] = 0;
            }
        }

        int temp = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                // cout << a[i] << " ";
                continue;
            }
            else
            {
                // cout << endl
                //  << a[i] << " ";
                temp = -1;
                break;
            }
        }

        // int temp = 0;
        // int operNeed = 0;
        // int sum = 0;
        // for (int i = 1; i < n - 1; ++i)
        // {
        //     operNeed += max(0, a[i] - 1);
        //     sum += a[i];
        //     if (operNeed > sum)
        //     {
        //         temp = -1;
        //         break;
        //     }
        // }

        if (temp == 0)
            cout << "yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}