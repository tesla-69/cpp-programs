#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int m = 0;
        // if (s.find("it"))
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
        for (int i = 0; i < s.size()-1; i++)
        {
            if (s[i] == 'i' && s[i + 1] == 't')
            {
                m = -1;
                cout << "YES" << endl;
                break;
            }
        }
        if (m == 0)
            cout << "NO" << endl;
    }
    return 0;
}