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
        {
            cin >> a[i];
        }
        if (n == 2)
            cout << "YES" << endl;
        else if (n == 3)
        {
            set<int> s;
            for (int i = 0; i < n; i++)
                s.insert(a[i]);
            if (s.size() == 1 || s.size() == 2)
                cout << "yes" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            set<int> s;
            for (int i = 0; i < n; i++)
                s.insert(a[i]);
            if (s.size() == 1)
                cout << "yes" << endl;
            else if (s.size() == 2)
            {
                int x = a[0];
                int c = 0;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] == x)
                        c++;
                }
                if (n % 2 == 0 && c == n / 2)
                    cout << "yes" << endl;
                else if (n % 2 == 1 && (c == n / 2 || c == n / 2 + 1))
                    cout << "YES" << endl;
                else
                    cout << "no\n";
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}