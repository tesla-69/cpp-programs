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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            p = p ^ a[i];
        }
        if (n % 2 == 0)
        {
            if (p == 0)
                cout << "0" << endl;
            else
                cout << "-1" << endl;
        }
        else
        {
            cout << p << endl;
        }
    }   
    return 0;
}