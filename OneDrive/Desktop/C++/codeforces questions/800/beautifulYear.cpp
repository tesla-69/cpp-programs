#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (1)
    {
        n++;
        int temp = n;
        set<int> s;
        while (temp)
        {
            int i;
            i = temp % 10;
            s.insert(i);
            temp = temp / 10;
        }
        if (s.size() == 4)
        {
            cout << n;
            break;
        }
    }
    return 0;
}