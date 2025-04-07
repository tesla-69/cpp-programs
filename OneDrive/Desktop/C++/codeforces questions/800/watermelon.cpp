#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a == 2)
        cout << "no";
    else
        (a % 2 == 0) ? cout << "yes" : cout << "no";
    return 0;
}
