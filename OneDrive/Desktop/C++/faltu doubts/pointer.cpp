#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)cin>>arr[i],(i==0)? b=arr[i]:b=max(arr[i],b);
    cout<<b<<endl;
    return 0;
}