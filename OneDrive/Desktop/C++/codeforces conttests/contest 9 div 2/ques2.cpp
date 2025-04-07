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
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            continue;
        else
        {
            c = 1;
            break;
        }
    }
    if (!c)
    {
        cout << "-1" << endl;
        return;
    }


    int ans = INT_MAX;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[0] == a[i])
        {
            count++;
        }
        else
        {
            ans = min(ans, count);
            count = 0;
        }
    }
    ans = min(ans, count);
    cout << ans << endl;

    // else{
    //     if(n%2==0) {
    //         if(a[0]!=a[n-1]) cout<<"0"<<endl;

    //     }
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