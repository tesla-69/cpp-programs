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

        int i = 0;
        int j = n - 1;
        int count = 0;
        for (int k = 0; k < n - 1; k++)
        {
            if (a[k] == a[k + 1])
            {
                count++;
                continue;
            }
        }
        if (count > 0)
        {
            cout << "0" << endl;
            continue;
        }
        while (i < j)
        {
            if (a[i] == a[j])
            {
                i++;
                j--;
                count++;
                continue;
            }
            else
                break;
        }
        if (count > 0)
        {
            cout << j - i + 1 << endl;
            continue;
        }

        while (i < j)
        {
            if (a[i] == a[i + 1])
            {
                count++;
                i++;
                continue;
            }
        }
        if (count > 0)
        {
            i++;
            cout << j - i + 1 << endl;
            continue;
        }
        while (i < j)
        {
            if (a[j] == a[j - 1])
            {
                count++;
                j--;
            }
        }
        if (count > 0)
        {
            j--;
            cout << j - i + 1 << endl;
            continue;
        }

        cout << j - i  << endl;
    }
    return 0;
}