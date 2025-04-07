#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        if (a == 1 && b == 1)
            cout << "NO" << endl;
        else if (a % 2 == 1 && b % 2 == 1)
            cout << "NO" << endl;
        else if ((a % 2 == 1 && b == a * 2) || (a == b * 2 && b % 2 == 1))
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}