#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (a[mid] == target)
            return mid;
        else if (a[mid] < target)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
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
    int x;
    cin >> x;
    int result = binarySearch(a, n, x);
    if(result>=0) cout<<result;
    else cout<<"not found";
    return 0;
}