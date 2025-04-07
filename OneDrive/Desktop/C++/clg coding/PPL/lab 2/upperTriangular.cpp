#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of square matrix :  " << endl;
    cin >> n;
    int a[n][n];
    cout << "Elements of matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (i > j)
                a[i][j] = 0;
        }
    }
    cout << "Upper triangular matrix is" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}