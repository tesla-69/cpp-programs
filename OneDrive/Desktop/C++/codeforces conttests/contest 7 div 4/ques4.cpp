#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> a = {10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 100, 101, 110, 111, 10, 11, 1};
    sort(a.begin(), a.end());

    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 30; i >= 0; i--)
        {
            if (n % a[i] == 0)
            {
                n = n / a[i];
                if (a[i] != 1)
                    i++;
                // cout << n << " ";
            }
        }
        if (n == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}