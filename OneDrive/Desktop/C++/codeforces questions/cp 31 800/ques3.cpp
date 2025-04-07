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
        int count = 0;
        int temp = 0;
        if (s.size() >= 3)
        {
            for (int i = 0; i < s.size() - 2; i++)
            {
                if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
                {
                    temp = -1;
                    cout << "2" << endl;
                    break;
                }
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
                count++;
        }

        if (temp != -1)
            cout << count << endl;
    }
    return 0;
}