#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long sum = accumulate(a, a + n, 0);
        if (sum <= k)
            cout << n << endl;
        else
        {
            int s = 0;
            int e = n - 1;
            for (long long i = 0; i < k;)
            {
                if (i < k)
                {
                    a[s]--;
                    if (a[s] == 0)
                        s++;
                    i++;
                }
                if (i < k)
                {
                    a[e]--;
                    if (a[e] == 0)
                        e--;
                    i++;
                }
                if (s == e && a[s] == 0)
                {
                    cout << n << endl;
                    break;
                }
            }
            if (s == e && a[s] != 0)
                cout << n - 1 << endl;
            if (s != e)
            {
                cout << s + n - 1 - e << endl;
            }
        }
        long long ans=0;

       while(s<=e){
            ans+=min(a[s],a[e]);
            if(a[s]<a[e]) s++;
            else e--;
            if(ans>=k) break;
        }


    }
    return 0;
}