#include <bits/stdc++.h>
using namespace std;

void addStrings(string &s1, int p1, string &s2, int p2, string &ans, int carry)
{
    if (p1 < 0 && p2 < 0)
    {
        if (carry != 0)
        {
            ans.push_back(carry + '0');
            return;
        }
        else
            return;
    }
    int x1 = ((p1 >= 0) ? s1[p1] : '0') - '0';
    int x2 = ((p2 >= 0) ? s2[p2] : '0') - '0';
    int sum = x1 + x2 + carry;
    int digit = sum % 10;
    carry = sum / 10;
    ans.push_back(digit + '0');

    addStrings(s1, p1 - 1, s2, p2 - 1, ans, carry);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int p1 = s1.length();
    int p2 = s2.length();
    string ans;
    addStrings(s1, p1 - 1, s2, p2 - 1, ans, 0);
    reverse(ans.begin(),ans.end());
    cout << ans;
    return 0;
}