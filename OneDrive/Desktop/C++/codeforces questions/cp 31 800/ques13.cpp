#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define f(i, n) for (int i = 0; i < n; i++)

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
        else
            continue;
    }
    return true;
}

void answer()
{
    int n;
    cin >> n;
    vi a(n);
    f(i, n) cin >> a[i];

    // vi b(n),c(n);
    sort(a.begin(), a.end());
    if (a[0] == a[n - 1])
        cout << "-1" << endl;
    else
    {
        int c = 0;
        int mx = a[n - 1];
        f(i, n) if (a[i] == mx) c++;

        cout << n - c << " "
             << c << endl;
        for (int i = 0; i < n - c; i++)
            cout << a[i] << " ";
        cout << endl;
        for (int i = 0; i < c; i++)
            cout << a[n - 1]<<" ";
        cout << endl;
    }

    // map<int, int> m;

    // f(i, n)
    // {
    //     m[a[i]]++;
    // }

    // if (m[a[0]] == n)
    // {
    //     cout << "-1" << endl;
    //     return;
    // }

    // int s, j;
    // f(i, n)
    // {
    //     if (isPrime(a[i]))
    //     {
    //         s = a[i];
    //         j = i;
    //         break;
    //     }
    // }
    // int c = 0;
    // for (int i = j; i < n; i++)
    // {
    //     if (a[i] == s)
    //         c++;
    // }
    // cout << c << " " << n - c << endl;
    // for (int i = j; i < n; i++)
    // {
    //     if (a[i] == s)
    //         cout << s << " ";
    // }
    // cout << endl;
    // f(i, n)
    // {
    //     if (a[i] != s)
    //         cout << a[i] << " ";
    // }
    // cout << endl;

    // else if (m[1] > 0)
    // {
    //     cout << m[1] << " " < n - m[1] << endl;
    //     for (int i = 0; i < m[1]; i++)
    //         cout << "1 ";
    //     for (int i = m[1]; i < n; i++)
    //         cout << a[i] << " ";
    //     cout << endl;
    // }
    // else if (m[2] > 0)
    // {
    //     cout << m[2] << " " < n - m[2] << endl;
    //     for (int i = 0; i < m[2]; i++)
    //         cout << "1 ";
    //     for (int i = m[2]; i < n; i++)
    //         cout << a[i] << " ";
    //     cout << endl;
    // }
    // else
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