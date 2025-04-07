#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define f(i, n) for (int i = 0; i < n; i++)

void answer()
{
    int n, m, k;
    cin >> n >> m >> k;
    // if(m==1) cout<<"no"<<endl;
    // else if(m==2 && k>=n/2) cout<<"no"<<endl;
    // else if(n==m && k>=n) cout<<"no"<<endl;
    // else cout<<"yes"<<endl;
    int a;
    if (n % m == 0)
        a = n / m;
    else
        a = n / m + 1;
    int c = n - a;
    if (c <= k)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
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