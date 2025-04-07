#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

using pi = pair<int, char>;

pi dC(const vector<int> &c, int l, int r)
{
    if (l == r)
        return {l, 'n'};
    int m = l + (r - l) / 2, ls = accumulate(c.begin() + l, c.begin() + m + 1, 0),
        rs = accumulate(c.begin() + m + 1, c.begin() + r + 1, 0);
    if (ls == rs)
        return dC(c, r, r);
    return ls < rs ? dC(c, l, m) : dC(c, m + 1, r);
}

int main()
{
    vector<int> c = {10, 10, 10, 10, 9, 10, 10, 10, 10};
    pi r = dC(c, 0, c.size() - 1);
    if (r.second == 'n')
        cout << "No defective coin found." << endl;
    else
        cout << "Defective coin found at index " << r.first << ", it is lighter." << endl;
    return 0;
}
