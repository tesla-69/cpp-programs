#include <bits/stdc++.h>
using namespace std;

// int first(string s int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int ans - 1;
//     while (s <= e)
//     {
//         int m = s + (e - s) / 2;
//         if (s[m] == 'B')
//         {
//             ans = m;
//             e = m - 1;
//         }
//         else if
//     }
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int f;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                f = i;
                break;
            }
        }
        int l;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                l = i;
                break;
            }
        }
        cout << l - f + 1 << endl;
    }
    return 0;
}