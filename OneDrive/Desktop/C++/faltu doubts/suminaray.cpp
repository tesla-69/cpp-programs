#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 4, 5, 6, 7};
    int sum = accumulate(a, a + 5, 0);
    cout << sum;
    return 0;
}