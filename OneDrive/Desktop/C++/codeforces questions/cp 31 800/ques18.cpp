    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int
    #define vi vector<int>
    #define vll vector<long long>
    #define f(i, n) for (int i = 0; i < n; i++)

    void answer()
    {
        int x, k;
        cin >> x >> k;
        if (x % k != 0)
        {
            cout << "1" << endl;
            cout << x << endl;
            return;
        }
        else
        {
            cout << "2" << endl;
            cout << x - 1 << " " << 1 << endl;
            return;
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