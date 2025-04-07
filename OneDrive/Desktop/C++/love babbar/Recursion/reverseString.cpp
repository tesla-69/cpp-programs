#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int i, int j)
{
    if (i >= j)
        return;
    swap(s[i], s[j]);
    reverse(s, i + 1, j - 1);
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    reverse(s, 0, n - 1);
    cout << s;
    return 0;
}