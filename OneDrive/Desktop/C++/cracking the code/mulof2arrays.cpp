#include <iostream>
using namespace std;

int main()
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    int b[3][5] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 1, 2, 3, 4, 5};
    int mul[2][5] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int temp = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                temp += a[i][k] * b[k][j];
            }
            mul[i][j] = temp;
            temp = 0;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}