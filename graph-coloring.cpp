#include <bits/stdc++.h>
using nmaespace std;

int n, m;
vector<vector<int>> graph;
vector<int> color;

bool isSafe(int v, int c)
{
    for (int i = 0; i < n; i++)
    {
        if (graph[v][i] == 1 && color[i] == c)
        {
            return false;
        }
    }
    return true;
}

bool solve(int v)
{
    if (v == n)
        return true;

    for (int i = 0; i <= m; i++)
    {
        if (isSafe(v, i))
        {
            color[v] = i;
            if (solve(v + 1))
                return true;
            color[v] = 0;
        }
    }
    return false;
}
