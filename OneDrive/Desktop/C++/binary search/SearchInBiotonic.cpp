#include <bits/stdc++.h>
using namespace std;

int MaxInBiotin(int a[], int size)
{
    int s = 0;
    int e = size - 1;
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] > a[m + 1] && a[m] > a[m - 1])
            return m;
        else if (a[m] > a[m - 1])
            s = m + 1;
        else if (a[m] > a[m + 1])
            e = m - 1;
    }
}

int bioticSearch1(int a[], int s,int e, int target)
{
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] == target)
            return m;
        else if(a[m]>target) e=m-1;
        else s=m+1;  
    }
    return -1;
}
int bioticSearch2(int a[], int s,int e, int target)
{
    int m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (a[m] == target)
            return m;
        else if(a[m]>target) s=m+1;
        else e=m-1;  
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
    int index = MaxInBiotin(a, n);
    int one=bioticSearch1(a,0,index,x);
    int two=bioticSearch2(a,index+1,n-1,x);
    if(one>=0) cout<<one;
    if(two>=0) cout<<two;



    return 0;
}