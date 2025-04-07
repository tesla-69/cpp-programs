#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int k = 1; k < n; k++)
        {
            if (a[0] == a[k])
            {
                a[k] = 0;
                count++;
            }
        }
        if (count == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            for (int p = 1; p < n; p++)
            {
                if (a[p] != 0)
                {
                    cout << p + 1 << endl;
                }
            }
        }
    }

    return 0;
}