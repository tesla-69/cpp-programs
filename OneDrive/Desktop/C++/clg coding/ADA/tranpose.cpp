#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            count++;
            count++;
            b[i][j] = a[j][i];
        }
    }
    count++;
    count++;
    cout<<endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "No of program steps are: " << count;
    return 0;
}