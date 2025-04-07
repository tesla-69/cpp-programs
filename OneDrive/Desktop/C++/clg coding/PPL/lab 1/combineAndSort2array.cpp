#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter size of both arrays:"<<endl;
    cin >> n >> m;
    int a[n];
    int b[m];
    int c[n + m];
    cout << "Enter First Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Second Array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }

    // sort(c, c + n + m);
    sort(c, c + n + m);
    cout << "Sorted Combined Array is" << endl;
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
