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

    return 0;
}