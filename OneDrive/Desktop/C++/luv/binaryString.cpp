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
        long long int code = 0;
        for (int i = n - 1, j = 0; i >= 0; i--, j++)
        {
            if (s[i] == '1')
            {
                code += pow(2, j);
            }
            else if (s[i] == '0')
            {
                code += 0;
            }
        }
        cout << code << endl;
    }

    return 0;
}