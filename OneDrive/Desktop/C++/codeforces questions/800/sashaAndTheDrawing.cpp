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
        if (k == 4 * n - 2)
        {
            cout << k / 2 + 1 << endl;
        }
        else if (k % 2 == 0)
            cout << k / 2 << endl;
        else
            cout << k / 2 + 1 << endl;
    }
    return 0;
}