#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int k = 0; k < n; k++)
        {
            if (n==3){
                
            }
            else
            {
            if ( k >= n - 2)
            {
                if (a[k] != a[k - 1])
                {
                    if (a[k] != a[k - 2])
                    {
                        cout << k + 1 << endl;
                        break;
                    }
                }
            }
            else if (a[k] != a[k + 1])
            {
                if (a[k] != a[k + 2])
                {
                    cout << k + 1 << endl;
                    break;
                }
            }
            else
                continue;
            }   
        }
    }

    return 0;
}
