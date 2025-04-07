#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max, min;
    cout << "Enter size of array: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    cout << "Maximum=" << max << endl
        << "Minimum=" << min;
    return 0;
}