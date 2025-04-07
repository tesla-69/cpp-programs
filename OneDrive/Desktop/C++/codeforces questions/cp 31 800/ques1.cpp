#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (k == 1)
        {
            int temp = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i + 1] >= a[i])
                {
                    continue;
                }
                else
                {
                    temp = -1;
                    break;
                }
            }
            if (temp == -1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}