#include <bits/stdc++.h>
using namespace std;

class disjointSet
{
    vector<int> parent, rank, size;

public:
    disjointSet(int n)
    {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }
    int findUPar(int node)
    {
        if (parent[node] == node)
            return node;
        return parent[node] = findUPar(parent[node]);
    }
    void unionByRank(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] < rank[ulp_v])
            parent[ulp_u] = ulp_v;
        else if (rank[ulp_v] < rank[ulp_u])
            parent[ulp_v] = ulp_u;
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
    void unionBySize(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v)
            return;
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

int main()
{
    disjointSet s(7);
    s.unionByRank(1, 2);
    s.unionByRank(2, 3);
    s.unionByRank(4, 5);
    s.unionByRank(6, 7);
    s.unionByRank(5, 6);
    if (s.findUPar(1) == s.findUPar(7))
        cout << "Same" << endl;
    else
        cout << "Not same\n";
    s.unionByRank(3, 7);
    if (s.findUPar(1) == s.findUPar(7))
        cout << "Same" << endl;
    else
        cout << "Not same\n";

    return 0;
}