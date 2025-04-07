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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x=0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                x=1;
                cout << "0" << endl;
                break;
            }
        }
        if (x)
            continue;
        else
        {
            int b[n - 1];
            for (int i = 0; i < n - 1; i++)
            {
                b[i] = a[i + 1] - a[i];
            }
            cout << *min_element(b,b+n-1) /2 +1 <<endl;
        }
    }
    return 0;
}