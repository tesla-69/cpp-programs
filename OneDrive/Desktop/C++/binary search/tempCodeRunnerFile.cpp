#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int target,int n)
{
    int start = 0;
    int end = n - 1;
    int mid ;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (a[mid] == target)
            return mid;

        else if (target > a[mid])
            start = mid + 1;

        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int target;
    cin >> target;
    int result = BinarySearch(a, target,n);
    if(result>=0)
    cout<<result;
    else  cout<<"Target not found ";
    return 0;
}
C++ program to implement iterative Binary Search
