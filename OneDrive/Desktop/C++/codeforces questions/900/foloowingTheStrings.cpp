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
        string s = "abcdefghijklmnopqrstuvwxyz";
        int count[26] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (count[j] == a[i])
                {
                    cout << s[j];
                    count[j]++;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}