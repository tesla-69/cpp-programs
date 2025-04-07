#include <bits/stdc++.h>
using namespace std;
long a = 999999;

int main()
{
    vector<long> arr(a);
    map<int, int> m;
    int digit = 0;
    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        int j = i;
        while (j)
        {
            int x = j % 10;
            m[x]++;
            digit++;
            j = j / 10;
        }
        if (m[0] == digit - 1)
            count++;
        arr[i] = count;
        m[0] = 0;
        digit = 0;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }
    return 0;
}