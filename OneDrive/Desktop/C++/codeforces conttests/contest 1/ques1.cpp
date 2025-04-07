#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[4][2];
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
        int size = max(abs(a[0][0] - a[1][0]), abs(a[0][0] - a[2][0]));

        cout << size * size << endl;
    }

    return 0;
}