#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;
        int a[n][n];
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                mn = min(mn, a[i][j]);
            }

        // cout << mn;
        // int f = a[0];
        int b[n][n];
        b[0][0] = mn;
        for (int i = 1; i < n; i++)
        {
            b[0][i] = d + b[0][i - 1];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[i][j] = c + b[i - 1][j];
            }
        }
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                m[a[i][j]]++;
            }
        }

        int mk = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (m[b[i][j]] == 0)
                {
                    mk = -1;
                    cout << "NO" << endl;
                    break;
                }
                else{
                    m[b[i][j]]--;
                }
            }
            if (mk == -1)
                break;
        }
        if (mk == 0)
            cout << "YES" << endl;
    }
    return 0;
}