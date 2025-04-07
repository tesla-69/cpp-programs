#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define f(i, n) for(int i = 0; i < n; i++)

void answer()
{
    int n;
    cin>>n;
    vi a(n);
    f(i,n) cin>>a[i];
    int j=0;
    for(int i=0;i<n-1;i++){
        if((a[i]+a[i+1])%2==0) {
            a[i+1]=a[i+1]*a[i];
            j++;
        }
    }
    // for(int i=j;i<n;i++) cout<<a[i]<<" ";
    cout<<j<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    cin>>t;
    while(t--)
    {
        answer();
    }

    return 0;
}