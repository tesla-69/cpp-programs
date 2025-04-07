#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define f(i, n) for (int i = 0; i < n; i++)

void answer()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int j;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[i])
            continue;
        else
        {
            j = i;
            break;
        }
    }
    if (s1[j] > s2[j])
    {
        for (int i = j + 1; i < n; i++)
        {
            if (s1[i] > s2[i])
                swap(s1[i], s2[i]);
        }
    }
    else if (s1[j] < s2[j])
    {
        for (int i = j + 1; i < n; i++)
        {
            if (s1[i] < s2[i])
                swap(s1[i], s2[i]);
        }
    }
    cout << s1 << endl
         << s2 << endl;
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