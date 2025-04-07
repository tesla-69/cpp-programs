#include <bits/stdc++.h>
using namespace std;
void isPrime(int n)
{
    int a[n + 1] = {0};
    for (int i = 2; i * i < n; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i * i; j < n + 1; j += i)
            {
                a[j] = 1;
            }
        }
    }
    for (int i = 2; i < n + 1; i++)
    {
        if (a[i] == 0)
            cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    isPrime(n);
    return 0;
}