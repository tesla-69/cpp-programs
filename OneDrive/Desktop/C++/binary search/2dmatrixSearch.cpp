#include <bits/stdc++.h>
using namespace std;

int twoDMatrixFind(int a[][100], int x, int r, int c)
{
    int s = 0;
    int e = r * c - 1;
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        int ri = m / c;
        int ci = m % c;
        if (a[ri][ci] == x)
        {
            cout << ri << " " << ci;
            return 1;
        }
        else if (a[ri][ci] > x)
            e = m - 1;
        else
            s = m + 1;
    }
    return -1;
}

int main()
{
    int r;
    int c;
    cin >> r >> c;
    int a[r][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    int x;
    cin >> x;
    twoDMatrixFind(a, x, r, c);
    return 0;
}