#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 4, 3, 7, 6, 5};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}