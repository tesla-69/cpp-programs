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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[v[i]]++;
        }
        if (m[1] >= m[-1] && m[-1] % 2 == 0)
            cout << "0" << endl;
        else if (m[1] >= m[-1])
        {
            cout << "1" << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                if (n == 2 && m[-1] == 2)
                    cout << "2" << endl;
                else if (n == 2 && m[-1] == 1)
                    cout << "1  " << endl;
                else
                {
                    int c = (m[-1] - m[1]) / 2;

                    m[-1] = m[-1] - c;
                    if (m[-1] % 2 == 0)
                        cout << c << endl;
                    else
                        cout << c + 1 << endl;
                }
            }
            else
            {
                int c = (m[-1] - m[1]) / 2 + 1;
                m[-1] = m[-1] - c;
                if (m[-1] % 2 == 0)
                    cout << c << endl;
                else
                    cout << c + 1 << endl;
            }
        }
    }
    return 0;
}