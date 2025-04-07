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
        string s;
        cin >> s;
        // string s1 = "map";
        // string s2 = "pie";
        // int c = 0;
        // int n1 = s.find(s1);
        // int n2 = s.find(s2);
        // while (n1 != string::npos && n2 != string::npos)
        // {
        //     if (n1 != string::npos)
        //     {
        //         s.erase(n1, s1.length());
        //         // cout << s[n] << " ";
        //         c++;
        //         n1 = s.find(s1);
        //     }
        //     if (n2 != string::npos)
        //     {
        //         s.erase(n2, s2.length());
        //         // cout << s[n] << " ";
        //         c++;
        //         n2 = s.find(s2);
        //     }
        // }

        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i <= n - 3 && s.substr(i, 3) == "pie")
            {
                count++;
                i += 2;
            }
            else if (i <= n - 3 && s.substr(i, 3) == "map")
            {
                count++;
                i += 2;
            }
        }

        // while (n2 != string::npos)
        // {
        // }
        cout << count << endl;
    }
    return 0;
}