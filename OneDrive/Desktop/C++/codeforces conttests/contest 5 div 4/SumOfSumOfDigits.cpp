#include <bits/stdc++.h>
using namespace std;

int main()
{
    int z = 200010;
    int a[z];
    for (int i = 1; i <= z; i++)
    {
        int m, sum = 0, j = i;
        while (j > 0)
        {
            m = j % 10;
            sum = sum + m;
            j = j / 10;
        }
        a[i - 1] = sum;
    }
    int b[z] = {0};
    b[0] = 1;
    for (int i = 1; i < z; i++)
    {
        b[i] = a[i] + b[i - 1];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << b[n - 1] << endl;
    }

    return 0;
}