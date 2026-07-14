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
} struct edges
{
    int u, v, w;
};
int main()
{
    int V, E;
    cin >> V >> E;
    vector<edges> edges(E);
    for (int i = 0; i < E; i++)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }
    sort(edges.begin(), edges.end(), [](edges a, edges b)
         { return a.w < b.w; });
    DSU dsu(v);
    int totalCost = 0;
    vector<edges> mst;
    for (auto edge : edges)
    {

        if (dsu.unite(edge.u, edge.v))
        {
            mst.push_back(edge);
            totalCost += edge.w;
        }

        if (mst.size() == V - 1)
            break;
    }

    // Print MST edges
    for (auto edge : mst)
    {
        cout << edge.u << " "
             << edge.v << " "
             << edge.w << endl;
    }

    // Print total cost
    cout << totalCost << endl;

    return 0;
}
}
