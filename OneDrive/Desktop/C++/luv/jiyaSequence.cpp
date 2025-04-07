#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        long long int mul=1;
        for (int i = 0; i < n; i++)
        {
            mul*=a[i];
        }
        int lsb=mul%10;
        if(lsb==3||lsb==2||lsb==5) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
               
    }

    return 0;
}