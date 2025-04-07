#include <bits/stdc++.h>
using namespace std;

int bs(int a[], int n, int s, int e, int key)
{
    if (s > e)
        return -1;
    int m = (s + e) / 2;
    if (a[m] == key)
        return m;
    else if (a[m] < key)
    {
        s = m + 1;
        bs(a, n, s, e, key);
    }
    else
    {
        e = m - 1;
        bs(a, n, s, e, key);
    }
    
}
int main()
{
    int a[] = {1, 2, 3, 45, 65, 67, 90};
    int n = 7; 
    int x = 65;
    int s = 0;
    int e = n - 1;
    int ans = bs(a, n, s, e, x);
    cout << ans;
    return 0;
}