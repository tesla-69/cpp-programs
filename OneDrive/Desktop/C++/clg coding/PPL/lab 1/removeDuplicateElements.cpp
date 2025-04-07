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
    int b[n], count = 0;
    cout << "Duplicate elements are: " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                for (int k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
            if (count == 1)
            {
                cout << a[i] << " ";
            }
        }
    }
    cout << "Unique elements are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}