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
        if (k == 1)
            for (int i = 0; i < n; i++)
                cout << i * 2 + 1 << " ";
        else if (k == n)
        {
            for (int i = 0; i < n; i++)
                cout << "69"
                     << " ";
        }
        else
            cout << "-1";
        cout << endl;
    }
    return 0;
}