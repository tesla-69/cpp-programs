#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,  n;
        long long b;
        cin >> a >> b >> n;
        int c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < n; i++)
        {
            b += min(c[i], a - 1);
        }
        cout << b << endl;
    }

    return 0;
}