#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000], n1, n2, i, j, b[1000], aub[2000], anb[2000], temp;
    cout << "Enter number of elements in array 1: " << endl;
    cin >> n1;
    cout << "Enter elements in array 1: " << endl;
    for (i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    cout << "Enter number of elements in array 2: " << endl;
    cin >> n2;
    cout << "Enter elements in array 2: " << endl;
    for (i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    cout << "Union of two arrays is:" << endl;
    for (i = 0; i < n1; i++)
    {
        cout << a[i] << " ";
    }
    for (j = 0; j < n2; j++)
    {
        temp = 0;
        for (i = 0; i < n1; i++)
        {
            if (a[i] == b[j])
            {
                temp = 1;
                break;
            }
        }
        if (temp != 1)
        {
            cout << b[j] << " ";
        }
    }
    cout << endl;
    cout << "Intersection of two arrays is:" << endl;
    for (i = 0; i < n1; i++)
    {
        temp = 0;
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                temp = 1;
                break;
            }
        }
        if (temp == 1)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
