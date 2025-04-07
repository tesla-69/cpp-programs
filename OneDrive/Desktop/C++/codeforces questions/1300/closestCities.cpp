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
    int m;
    cin>>m;
    vi x(m),y(m);
    for(int i=0;i<m;i++) {
        cin>>x[i]>>y[i];
    }
    vll f;
    f.push_back(1);
    for(int i=1;i<n-1;i++){
       int d1=a[i]-a[i-1];
       int d2=a[i+1]-a[i];
       if(d1>d2) f.push_back(1);
       else f.push_back(d2); 
    }
    vll fs;
    int sum=0;
    fs.push_back(sum);
    for(int i=0;i<f.size();i++){
        sum+=f[i];
        fs.push_back(sum);
    }
    vll b;
    b.push_back(1);
    for(int i=n-2;i>0;i--){
       int d1=a[i]-a[i-1];
       int d2=a[i+1]-a[i];
       if(d1<d2) b.push_back(1);
       else b.push_back(d1); 
    }
    vll bs;
    sum=0;
    bs.push_back(sum);
    for(int i=0;i<b.size();i++){
        sum+=b[i];
        bs.push_back(sum);
    }
    // for(auto&it:bs) cout<<it<<" ";
    // cout<<endl;
    // for(auto&it:fs) cout<<it<<" ";
    // cout<<endl;

    for(int i=0;i<m;i++){
        if(y[i]>x[i]){
            cout<<fs[y[i]-1]-fs[x[i]-1]<<endl;
        }
        else{
            cout<<abs(bs[n-y[i]]-bs[n-x[i]])<<endl;
        }
    }
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