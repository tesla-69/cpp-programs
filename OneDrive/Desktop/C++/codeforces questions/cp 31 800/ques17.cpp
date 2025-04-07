#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long int
#define f(i, n) for (int i = 0; i < n; i++)

void answer()
{
    int n, k, x;
    cin >> n >> k >> x;
    if(k==1) {cout<<"NO"<<endl;return;}
    int sum = 0;
    if(x!=1) {
        cout<<"yes"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++) cout<<"1 ";
        cout<<endl;
    }
    else{
        if(n%2==0 && k>=2) {
            cout<<"yes"<<endl<<n/2<<endl;
            for(int i=0;i<n/2;i++) cout<<"2 ";
            cout<<endl;
        }
        else if(k>2){
            if(n==1) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                int cnt=0;
                n=n-3;
                cnt++;
                cnt+=n/2;
                cout<<cnt<<endl<<"3 ";
                for(int i=0;i<n/2;i++) cout<<"2 ";
                cout<<endl;
                
            }
        }
        else cout<<"NO"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        answer();
    }

    return 0;
}