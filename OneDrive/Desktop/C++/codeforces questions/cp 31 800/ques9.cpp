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
        int a[n];
        for (int i = 0; i < n - 1; i++)
            cin >> a[i];
        cout << accumulate(a, a + n - 1, 0) * (-1) << endl;
    }
    return 0;
}