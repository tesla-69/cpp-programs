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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int x = 0;
        int prod = 1;
        int a[] = {2023, 289, 119, 17, 7, 1};
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1 || b[i] == 7 || b[i] == 17 || b[i] == 289 || b[i] == 119 || b[i] == 2023)
            {
                prod *= b[i];
                continue;
            }
            else
            {
                x = -1;
                break;
            }
        }

        vector<int> ans;
        if (x == 0 && 2023 % prod == 0)
        {
            for (int i = 0; i < k; i++)
            {
                for (int i = 0; i < 6; i++)
                {
                    if (a[i] * prod == 2023)
                    {
                        prod *= a[i];
                        ans.push_back(a[i]);
                        break;
                    }
                }
            }
            cout << "YES" << endl;
            for (auto it : ans)
                cout << it << " ";
            cout << endl;
        }

        else
        {
            cout << "NO" << endl;
            continue;
        }
    }
    return 0;
}