#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100], b[100][100], r1, c1, r2, c2, i, j;
    cout << "Enter number of rows in array 1: " << endl;
    cin >> r1;
    cout << "Enter number of columns in array 1: " << endl;
    cin >> c1;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter number of rows in array 2: " << endl;
    cin >> r2;
    cout << "Enter number of columns in array 2: " << endl;
    cin >> c2;
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    if (c1 = r2)
    {
        int temp = 0, mul[100][100];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    temp += a[i][k] * b[k][j];
                }
                mul[i][j] = temp;
                temp = 0;
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "Invalid input";
    return 0;
}