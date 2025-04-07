#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long int
#define f(i, n) for(int i = 0; i < n; i++)

void answer()
{
    int n;
    cin>>n;
    vi a(n);
    f(i,n)cin>>a[i];
    vector<long long> l(n,0);
    vector<long long> r(n,0);
    int count=0;
    // l[0]=a[0];
    // r[n-1]=a[n-1];
    for(int i=0;i<n;i++) {
        // l[i]=l[i-1]*a[i];
        if(a[i]==2){
            count++;
            l[i]=count;
        }
        else l[i]=count;
    }
    count=0;
    for(int i=n-1;i>=0;i--){
        // r[i]=r[i+1]*a[i];
        if(a[i]==2){
            count++;
            r[i]=count;
        }
        else r[i]=count;
    }
    for(int i=0;i<n-1;i++){
        if(l[i]==r[i+1]) {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
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