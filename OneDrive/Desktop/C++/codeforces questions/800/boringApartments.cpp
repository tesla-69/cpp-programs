#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int a = x % 10;
        int count = 0;
        count = count + 10 * (a - 1);
        int c = log10(x) + 1;
        count += (c * (c + 1)) / 2;
        cout << count << endl;
    }
    return 0;
}