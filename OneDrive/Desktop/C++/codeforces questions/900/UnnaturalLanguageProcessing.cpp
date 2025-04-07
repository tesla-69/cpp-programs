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
        string s;
        cin >> s;
        vector<string> ans;
        for (int i = 0; i < n;)
        {
            if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') && (s[i + 1] == 'a' || s[i + 1] == 'e') && (s[i + 3] == 'a' || s[i + 3] == 'e'))
            {
                ans.push_back(s.substr(i, 2));
                i += 2;
            }
            else
            {
                ans.push_back(s.substr(i, 3));
                i += 3;
            }
        }
        int size = ans.size();
        int count = 0;
        for (auto it : ans)
        {
            count++;
            if (count == size)
                cout << it;
            else
                cout << it << ".";
        }
        cout << endl;
    }
    return 0;
}