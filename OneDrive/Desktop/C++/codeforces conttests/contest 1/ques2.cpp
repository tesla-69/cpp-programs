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
        string s;
        cin >> s;
        string e;
        cin >> e;
        int l = 0, f = 0, lf = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == e[i] && s[i] == '1')
                lf++;
            if (s[i] == '1')
            {
                l++;
            }
            if (e[i] == '1')
                f++;
        }
        cout << l + f - (lf * 2) - min(f - lf, l - lf) << endl;
    }

    return 0;
}