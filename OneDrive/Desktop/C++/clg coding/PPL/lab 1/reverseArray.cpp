#include <bits/stdc++.h>
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
    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i], a[n - 1 - i]);
    }
    cout << "Reversed array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}