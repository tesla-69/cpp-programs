#include <bits/stdc++.h>
using namespace std;

const int MAX_RANGE = 1001;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int count[MAX_RANGE] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i]]++;
    }
    cout << "Duplicate Elements are" << endl;
    for (int i = 0; i < MAX_RANGE; i++)
    {
        if (count[i] > 1)
        {
            cout << i << endl;
        }
    }
    cout << "Unique Elements are " << endl;
    for (int i = 0; i < MAX_RANGE; i++)
    {
        if (count[i] == 1)
        {
            cout << i << endl;
        }
    }
    return 0;
}
