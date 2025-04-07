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
        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                if (i % 4 == 0 || i % 4 == 1)
                {
                    if (j % 4 == 0 || j % 4 == 1)
                    {
                        cout << "#";
                    }
                    else
                        cout << ".";
                }
                else
                {
                    if (j % 4 == 2 || j % 4 == 3)
                    {
                        cout << "#";
                    }
                    else
                        cout << ".";
                }
            }
            cout << endl;
        }
        // cout << endl;
    }
    return 0;
}