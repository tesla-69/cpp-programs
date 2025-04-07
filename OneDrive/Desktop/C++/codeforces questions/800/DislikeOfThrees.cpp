#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        vector<int> a(1);
        for (int i = 1; i <= 2 * k; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
                continue;
            else
            {
                a.push_back(i);
                // cout << a[i]<<" ";
            }
        }
        cout << a[k] << endl;
    }
    return 0;
}