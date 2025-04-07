#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid;
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
        cin >> a[i];
    int target;
    cin >> target;
    int result = binarySearch(a, target, n);
    if (result >= 0)
        cout << result;
    else
        cout << "Target not found ";
    return 0;
}

// C++ program to implement iterative Binary Search

// #include <bits/stdc++.h>
// using namespace std;

// int binarySearch(int arr[], int l, int r, int x)
// {
//     while (l <= r)
//     {
//         int m = l + (r - l) / 2;

//         if (arr[m] == x)
//             return m;

//         if (arr[m] < x)
//             l = m + 1;

//         else
//             r = m - 1;
//     }

//     return -1;
// }

// int main(void)
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int x;
//     cin >> x;

//     int result = binarySearch(arr, 0, n - 1, x);
//     (result == -1)
//         ? cout << "Element is not present in array"
//         : cout << "Element is present at index " << result;
//     return 0;
// }
