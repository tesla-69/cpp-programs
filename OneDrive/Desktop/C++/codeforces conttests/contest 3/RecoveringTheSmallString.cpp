#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> s(1);
    string str = "abcdefghijklmnopqrstuvwxyz";
    for (int c = 3; c <= 28; c++)
    {
        string temp = "000";
        temp[0] = 'a';
        temp[1] = 'a';
        temp[2] = str[c - 3];
        s.push_back(temp);
    }
    for (int c = 29; c <= 53; c++)
    {
        string temp = "000";
        temp[0] = 'a';
        temp[1] = str[c - 28];
        temp[2] = 'z';
        s.push_back(temp);
    }
    for (int c = 54; c <= 78; c++)
    {
        string temp = "000";
        temp[0] = str[c - 53];
        temp[1] = 'z';
        temp[2] = 'z';
        s.push_back(temp);
    }
    while (t--)
    {
        int n;
        cin >> n;
        // string s = "0abcdefghijklmnopqrstuvwxyz";
        cout << s[n - 2] << endl;
    }
    return 0;
}