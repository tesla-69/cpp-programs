#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string s1 = s.substr(0, 2);
        string s2 = s.substr(3, 2);
        int hr = stoi(s1);
        int min = stoi(s2);
        if (hr < 12)
        {
            if (hr == 0)
            {
                cout << "12:" << s2 << " AM" << endl;
            }
            else
                cout << s << " "
                     << "AM" << endl;
        }
        else
        {
            if (hr == 12)
                cout << hr << ":" << s2 << " PM" << endl;
            else
            {
                hr = hr - 12;
                if (hr < 10)
                    cout << "0" << hr << ":" << s2 << " PM" << endl;
                else
                    cout << hr << ":" << s2 << " PM" << endl;
            }
        }
    }
    return 0;
}