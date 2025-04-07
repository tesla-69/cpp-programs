#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int mul=1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mul=(1ll*(mul%m)*(a[i]%m))%m;
        }
        string s;
        cin >> s;
        int low = 0;
        int high = n;
        for (int i = 0; i < n; i++)
        {
            int rem = 1;
            for (int j = low; j < high; j++)
            {
                // rem = rem * (a[j] % m);
            }
            rem = (rem + m) % m;
            cout << rem << " ";
            if (s[i] == 'L')
                low++;
            else if (s[i] == 'R')
                high++;
        }
        cout << endl;
    }
    return 0;
}