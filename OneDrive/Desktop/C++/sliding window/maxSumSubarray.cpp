#include <bits/stdc++.h>
using namespace std;

int maxSum(int a[], int size, int k)
{
    int i = 0;
    int j = 0;
    int mx = INT_MIN;
    int sum = 0;
    while (j < size)
    {
        sum = sum + a[j];
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            mx = max(mx, sum);
            sum = sum - a[i];
            i++;
            j++;
        }
    }
    return mx;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int mx = maxSum(a, n, k);
    cout << mx;
    return 0;
}