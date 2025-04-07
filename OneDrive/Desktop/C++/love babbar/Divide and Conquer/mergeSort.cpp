#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, vector<int> &temp, int s, int m, int e)
{
    int i = s;
    int j = m + 1;
    int k = s;
    while (i <= m && j <= e)
    {
        if (a[i] >= a[j])
            temp[k++] = a[j++];
        else
            temp[k++] = a[i++];
    }
    while (i <= m)
        temp[k++] = a[i++];
    while (j <= e)
        temp[k++] = a[j++];

    while (s <= e)
    {
        a[s] = temp[s];
        s++;
    }
}
void mergeSort(vector<int> &a, vector<int> &temp, int s, int e)
{
    if (s >= e)
        return;
    int m = s + (e - s) / 2;
    mergeSort(a, temp, s, m);
    mergeSort(a, temp, m + 1, e);
    merge(a, temp, s, m, e);
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int s = 0;
    int e = n - 1;
    vector<int> temp(n);
    mergeSort(a, temp, s, e);
    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}