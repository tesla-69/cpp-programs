#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
    if (i >= j)
        return true;
    if (s[i] == s[j])
    {
        isPalindrome(s, i + 1, j - 1);
    }
    else
        return false;
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if (isPalindrome(s, 0, n - 1))
        cout << "true";
    else
        cout << "no";
    return 0;
}