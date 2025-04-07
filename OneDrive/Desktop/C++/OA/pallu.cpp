#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int coe = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] % 2 == 1)
                    coe++;
                else
                {
                    while (a[i] % 2 == 1)
                    {
                        a[i] /= 2;
                        coe++;
                    }
                }
            }
            else
            {
                if (a[i] % 2 == 0)
                    coe++;
                else
                {
                    while (a[i] % 2 == 0)
                    {
                        a[i] /= 2;
                        coe++;
                    }
                }
            }
        }
        int ceo = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] % 2 == 0)
                    ceo++;
                else
                {
                    while (a[i] % 2 == 0)
                    {
                        a[i] /= 2;
                        ceo++;
                    }
                }
            }
            else
            {
                if (a[i] % 2 == 1)
                    ceo++;
                else
                {
                    while (a[i] % 2 == 1)
                    {
                        a[i] /= 2;
                        ceo++;
                    }
                }
            }
        }
        cout << min(ceo, coe);
    }
    return 0;
}