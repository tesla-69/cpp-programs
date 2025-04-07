#include <iostream>
using namespace std;

int main()
{
    int *a;
    int b[8] = {1, 1, 2, 3, 6, 5, 8, 9};
    a = &b;
    cout << (&b) << " " << b << endl;
    cout << a << " ";
    return 0;
}