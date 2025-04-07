#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max;
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
    cout << "Pair df elements whose sum is less than max elemnt are : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] < max)
            {
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }

    return 0;
}