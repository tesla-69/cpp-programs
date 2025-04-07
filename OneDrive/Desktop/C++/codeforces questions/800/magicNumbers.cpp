#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = s.length();

    for (int i = 0; i < a; i++)
    {
        if (i < a - 2 && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
            i = i + 2;
        else if (i < a - 1 && s[i] == '1' && s[i + 1] == '4')
            i++;
        else if (s[i] == '1')
            continue;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}