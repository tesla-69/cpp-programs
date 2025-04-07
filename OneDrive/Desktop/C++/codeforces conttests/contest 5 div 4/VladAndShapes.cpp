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
        vector<string> s;
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            s.push_back(temp);
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int c1 = 0;

            for (int j = 0; j < n; j++)
            {
                if (s[i][j] == '1')
                {
                    c1++;
                }
            }
            if (c1 > 0)
                v.push_back(c1);
        }
        if (v[0] == v[1])
            cout << "SQUARE" << endl;
        else
            cout << "TRIANGLE" << endl;

        // int ac = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (a[i][j] == 1)
        //         {
        //             ac = i;
        //             break;
        //         }
        //     }
        // }
        // int c[50] = {0};
        // int z = 0;
        // for (int i = ac; i < n; i++)
        // {
        //     int x = 0;
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (a[i][j] == 1)
        //         {
        //             x++;
        //         }
        //     }
        //     c[z] = x;
        //     z++;
        // }
        // if (c[0] == c[1])
        // {
        //     cout << "SQUARE" << endl;
        // }
        // // if (z == 1)
        // else
        //     cout << "TRIANGLE" << endl;
    }

    return 0;
}