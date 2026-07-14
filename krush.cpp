#include <bits/stdc++.h>
using namespace std;

class DSU
{
    vector<int> parent, rank;

public:
    DSU(int n)
    {
        parent.resize(n);
        rank.resize(n);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }
    int find(int x)
    {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    bool unite(int a, int b)
    {
        int pa = find(pa);
        int pb = find(pb);
        if (pa == pb)
        {
            return false;
        }
        if (rank[pa] < rank[pb])
            parent[pa] = pb;
        else if (rank[pa] > rank[pb])
            parent[pb] = pa;
        else
        {
            parent[pb] = pa;
            rank[pa]++;
        }
        return true;
    }
} struct edge
{
}
