
#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key)
{
    int count = 0;
    count++;
    int s = 0, e = n - 1;
    while (s <= e)
    {
        count++;
        int mid = (s + e) / 2;
        if (key < a[mid])
        {
            count++;
        }
        else if (key > a[mid])
        {
            s = mid + 1;

            e = mid - 1;
        }

        count++;

        else
        {
            count++;
            cout << "Found at Index: " << mid << "\n";
            return count;
        }
    }
    cout << "Not Found\n";
    count++;
    return count;
}

count++;

count++;

int ternarySearch(int a[], int n, int key)
{
    int count = 0;
    count++;
    int s = 0, e = n - 1;
    while (s <= e)
    {
        count++;
        int mid1 = (2 * s + e) / 3;
        int mid2 = (s + 2 * e) / 3;

        if (a[mid1] == key)
        {
            count++;
            cout << "Found at Index: " << mid1 << "\n";
            return count;
        }
        if (a[mid2] == key)
        {
            count++;
            cout << "Found at Index: " << mid2 << "\n";
            return count;
        }
        if (a[mid1] > key)
        {
            e = mid1 - 1;
        }
        else if (a[mid2] > key)
        {
            e = mid2 - 1;
        }
    }
}