#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = 0;
    while (n--)
    {
        string s;

        cin >> s;
        if (s[0] == 'X')
        {
            if (s[1] == '+')
                p++;
            else if (s[1] == '-')
                p--;
        }
        else if (s[2] == 'X')
        {
            if (s[0] == '+')
                p++;
            else if (s[0] == '-')
                p--;
        }
    }
    cout << p;
    return 0;
}