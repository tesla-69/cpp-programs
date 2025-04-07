// Write a program to multiply two matrices of size n*n and count the total no of
// program steps using the count method and plot the graph for how time complexity
// varies with the increasing size of matrices, also do an analysis of the actual time
// taken to perform the matrix multiplication using time() function.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n], b[n][n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    int c[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                count++;
                count++;
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    count++;
    count++;
    count++;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    cout << "No of program steps are: " << count;
    return 0;
}