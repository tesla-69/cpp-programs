#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    // vector<string> s;
    while (n--)
    {
        string temp;
        cin >> temp;
        // s.push_back(temp);

        if (temp == "Tetrahedron")
            count += 4;
        else if (temp == "Cube")
            count += 6;
        else if (temp == "Octahedron")
            count += 8;
        else if (temp == "Dodecahedron")
            count += 12;
        else if (temp == "Icosahedron")
            count += 20;
    }
    cout << count;

    return 0;
}