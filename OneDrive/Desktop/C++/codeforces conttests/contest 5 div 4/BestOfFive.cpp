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
        int c1 = 0, c2 = 0;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == 'A')
                c1++;
            else
                c2++;
        }
        if (c1 > c2)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}