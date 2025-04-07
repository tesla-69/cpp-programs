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
    string s;
    cin >> s;
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (s[i] == s[j])
            break;
        else
        {
            i++;
            j--;
        }
    }
    cout << j - i + 1 << endl;
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