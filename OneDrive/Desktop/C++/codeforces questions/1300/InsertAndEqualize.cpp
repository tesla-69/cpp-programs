#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define f(i, n) for (int i = 0; i < n; i++)

void answer()
{
    int n;
    cin >> n;
    vi a(n);
    f(i, n) cin >> a[i];
    vi b(n);

    // f(i,n) cout<<a[i]<<" ";
    // cout<<endl;

    for (int i = 1; i < n; i++)
    {
        b[i] = abs(a[i - 1] - a[i]);
    }
    int gcd = 0;
    for (int i = 1; i < n; i++)
        gcd = __gcd(gcd, b[i]);
    gcd = max(gcd, 1);
    // cout<<gcd<<endl;

    sort(a.begin(), a.end());
    // f(i,n) cout<<a[i]<<" ";
    // cout<<endl;
    int abc = 1;
    for (int i = n - 1; i > 0; i++)
    {
        if (a[i - 1] + gcd == a[i])
        {
            continue;
        }
        else
        {
            abc = 0;
            a.push_back(a[i] - gcd);
        }
    }
    if (abc)
    {
        a.push_back(a[0] - gcd);
        //  a[n] = a[n - 1] + gcd;
        int ans = 0;
        for (int i = 0; i <= n; i++)
        {
            int m = abs((a[i] - a[n-1]) / gcd);
            ans += m;
        }
        cout << ans << endl;
    }
    else{
        //  a[n] = a[n - 1] + gcd;
            int ans = 0;
            for (int i = 0; i <= n; i++)
            {
                int m = abs((a[i] - a[n-1]) / gcd);
                ans += m;
            }
            cout << ans << endl;
    }
    // else
    // {
    //     // cout<<gcd<<endl;
    //     a[n] = a[n - 1] - gcd;
    //     // cout<<a[n-1]<<endl;
    //     int ans = 0;
    //     for (int i = 0; i <= n; i++)
    //     {
    //         int m = abs((a[i] - a[n - 1]) / gcd);
    //         ans += m;
    //         // cout<<m<<endl;
    //     }
    //     cout << ans << endl;
    // }
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