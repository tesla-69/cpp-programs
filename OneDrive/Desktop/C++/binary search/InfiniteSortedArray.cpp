#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int s,int e,int target){
    while (s<=e)
    {
        int m=s+(e-s)/2;
        if(a[m]==target) return m;
        else if(a[m]>target) e=m-1;
        else s=m+1;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=i+1;
    }
    int x;
    cin>>x;
    int s=0;
    int e=1;
    int count=0;
    while (e<=x)
    {
        s=e;
        e=e*2;
        count++;
    }
    cout<<s<<" "<<e<<endl<<count<<endl;
    int index=binarySearch(a,s,e,x);
    cout<<index;
    
    
    return 0;
}