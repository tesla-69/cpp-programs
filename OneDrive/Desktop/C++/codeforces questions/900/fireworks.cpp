#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, m;
        cin >> a >> b >> m;
        if (m < min(a, b))
        {
            cout << "2" << endl;
            continue;
        }
        else
            cout << m / a + m / b + 2 << endl;
    }

    return 0;
}