#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array :  " << endl;
    cin >> n;
    int a[n];
    cout << "Elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    float median;
    if (n % 2 != 0)
    {
        median = a[n / 2];
        cout << "Median is :" << median << endl;
    }
    else if (n % 2 == 0)
    {
        median = (a[n / 2] + a[n / 2 - 1]) / 2.0;
        cout << "Median is :" << median;
    }
    return 0;
}