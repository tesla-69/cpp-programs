#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        int sum = accumulate(a.begin(), a.end(), 0);
        if (sum > 0)
        {
            if (sum < a.size())
                cout << "1" << endl;
            else
            {
                count = sum - a.size();
                cout << count << endl;
            }
            continue;
        }
        else if (sum <= 0)
            cout << "1" << endl;
    }
    return 0;
}