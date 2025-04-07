#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }
    cout<<m[1] <<" "<<m[-1]<<endl;
    return 0;
}